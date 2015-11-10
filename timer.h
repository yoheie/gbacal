#ifndef TIMER_H__
#define TIMER_H__

void timer_init(int timer, void (*func)(void));
void timer_start(int timer);
void timer_stop(int timer);

#endif /* TIMER_H__ */
