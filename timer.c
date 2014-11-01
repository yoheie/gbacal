#include "interrupt.h"
#include "timer.h"


#define TIMER_COUNT_REG(t)   (*(volatile unsigned short *)(0x04000100 + 4 * (t)))
#define TIMER_CONTROL_REG(t) (*(volatile unsigned short *)(0x04000102 + 4 * (t)))

static void timer0_interrupt(void);
static void timer1_interrupt(void);
static void timer2_interrupt(void);
static void timer3_interrupt(void);
static void timer_interrupt(int timer);

static void (*timer_callback[4])(void);

static void (* const timer_interrupt_table[4])(void) = {
	timer0_interrupt,
	timer1_interrupt,
	timer2_interrupt,
	timer3_interrupt
};

void timer_init(int timer, void (*func)(void))
{
	TIMER_COUNT_REG(timer) = 0;
	TIMER_CONTROL_REG(timer) = 0x0040;
	timer_callback[timer] = func;
	interrupt_enable(INT_TIMER_0 + timer, timer_interrupt_table[timer]);
}

void timer_start(int timer)
{
	TIMER_CONTROL_REG(timer) |= 0x0080;
}

void timer_stop(int timer)
{
	TIMER_CONTROL_REG(timer) &= ~0x0080;
}

static void timer0_interrupt(void)
{
	timer_interrupt(0);
}

static void timer1_interrupt(void)
{
	timer_interrupt(1);
}

static void timer2_interrupt(void)
{
	timer_interrupt(2);
}

static void timer3_interrupt(void)
{
	timer_interrupt(3);
}

static void timer_interrupt(int timer)
{
	(*timer_callback[timer])();
}
