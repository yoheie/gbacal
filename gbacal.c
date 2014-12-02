#include "interrupt.h"
#include "color.h"
#include "display.h"
#include "timer.h"


#define INITIAL_YEAR 2014
#define INITIAL_MONTH 10

#define YEAR_MIN 1970
#define YEAR_MAX 9999

#define LINE_OFFSET 2
#define COLUMN_OFFSET 10

#define BUTTON_PRESS_TIME 64
#define BUTTON_STATUS_REG (*(unsigned short *)0x04000130)


enum {
	BUTTON_MIN,
	BUTTON_A = BUTTON_MIN,
	BUTTON_B,
	BUTTON_SELECT,
	BUTTON_START,
	BUTTON_RIGHT,
	BUTTON_LEFT,
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_MAX = BUTTON_DOWN
};

static const char num_char[10] = "0123456789";
static const char weekday_label[7][3] = {
	"Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"
};

static volatile int button_event[BUTTON_MAX - BUTTON_MIN + 1];


static void print_day(int line, int weekday, const char *text);
static void button_scan_timer(void);


int main(void)
{
	int year = INITIAL_YEAR;
	int month = INITIAL_MONTH;
	int update = 1;
	int days;
	int ytmp;
	int mtmp;
	int weekday;
	char line0_text[7] = "    -  ";
	char day_text[3] = "  ";
	int line;
	int w;
	int d;

	interrupt_init();
	timer_init(0, button_scan_timer);
	display_init();
	timer_start(0);

	while (1) {
		if (button_event[BUTTON_START]) {
			button_event[BUTTON_START] = 0;
			year = INITIAL_YEAR;
			month = INITIAL_MONTH;
			update = 1;
		}
		if (button_event[BUTTON_RIGHT]) {
			button_event[BUTTON_RIGHT] = 0;
			if (year < YEAR_MAX || month < 12) {
				if (++month > 12) {
					year++;
					month = 1;
				}
				update = 1;
			}
		}
		if (button_event[BUTTON_LEFT]) {
			button_event[BUTTON_LEFT] = 0;
			if (YEAR_MIN < year || 1 < month) {
				if (--month < 1) {
					year--;
					month = 12;
				}
				update = 1;
			}
		}
		if (button_event[BUTTON_UP]) {
			button_event[BUTTON_UP] = 0;
			if (YEAR_MIN < year) {
				year--;
				update = 1;
			}
		}
		if (button_event[BUTTON_DOWN]) {
			button_event[BUTTON_DOWN] = 0;
			if (year < YEAR_MAX) {
				year++;
				update = 1;
			}
		}
		if (update) {
			line0_text[0] = num_char[year / 1000 % 10];
			line0_text[1] = num_char[year /  100 % 10];
			line0_text[2] = num_char[year /   10 % 10];
			line0_text[3] = num_char[year /    1 % 10];
			line0_text[5] = num_char[month /  10 % 10];
			line0_text[6] = num_char[month /   1 % 10];

			print_text(LINE_OFFSET + 0, COLUMN_OFFSET + 6, line0_text, COLOR_BLACK);
			for (w = 0; w < 7; w++) {
				print_day(2, w, weekday_label[w]);
			}

			if (month == 2) {
				if (year % 4 == 0 && ((year % 100 != 0) || (year % 400 == 0))) {
					days = 29;
				}
				else {
					days = 28;
				}
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				days = 30;
			}
			else {
				days = 31;
			}

			if (month <= 2) {
				ytmp = year - 1;
				mtmp = month + 12;
			}
			else {
				ytmp = year;
				mtmp = month;
			}

			weekday = (ytmp + ytmp/4 - ytmp/100 + ytmp/400 + (mtmp*13 + 8)/5 + 1) % 7;

			line = 4;

			for (w = 0; w < weekday; w++) {
				day_text[0] = ' ';
				day_text[1] = ' ';
				print_day(line, w, day_text);
			}

			for (d = 1; d < days; d++) {
				day_text[0] = ((d/10 == 0) ? ' ' : num_char[d/10]);
				day_text[1] = num_char[d%10];
				print_day(line, w, day_text);
				if (++w > 6) {
					line += 2;
					w = 0;
				}
			}

			day_text[0] = ((d/10 == 0) ? ' ' : num_char[d/10]);
			day_text[1] = num_char[d%10];
			print_day(line, w, day_text);
			w++;
			while (line <= 14) {
				while (w < 7) {
					day_text[0] = ' ';
					day_text[1] = ' ';
					print_day(line, w, day_text);
					w++;
				}
				w = 0;
				line += 2;
			}
			update = 0;
		}
	}

	return 0;
}

static void print_day(int line, int weekday, const char *text)
{
	unsigned short color;

	if (weekday == 0) {
		color = COLOR_RED;
	}
	else if (weekday == 6) {
		color = COLOR_BLUE;
	}
	else {
		color = COLOR_BLACK;
	}

	print_text(LINE_OFFSET + line, COLUMN_OFFSET + weekday * 3, text, color);
}

static void button_scan_timer(void)
{
	static unsigned short button_prev;
	static unsigned short button_current;
	unsigned short button_change;
	static int button_press_time[BUTTON_MAX - BUTTON_MIN + 1];
	int button;

	button_current = BUTTON_STATUS_REG;
	button_change = button_prev ^ button_current;

	for (button = BUTTON_MIN; button <= BUTTON_MAX; button++) {
		if ((button_current & (1u << button)) == 0) {
			if (button_change & (1u << (button))) {
				button_event[button] = 1;
				button_press_time[button] = BUTTON_PRESS_TIME * 2;
			}
			if (--button_press_time[button] <= 0) {
				button_event[button] = 1;
				button_press_time[button] = BUTTON_PRESS_TIME;
			}
		}
	}

	button_prev = button_current;
}
