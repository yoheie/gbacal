#ifndef INTERRUPT_H__
#define INTERRUPT_H__


typedef enum {
	INT_TYPE_MIN,
	INT_V_BLANK = INT_TYPE_MIN,
	INT_H_BLANK,
	INT_V_COUNTER,
	INT_TIMER_0,
	INT_TIMER_1,
	INT_TIMER_2,
	INT_TIMER_3,
	INT_SERIAL,
	INT_DMA_0,
	INT_DMA_1,
	INT_DMA_2,
	INT_DMA_3,
	INT_KEY,
	INT_GAMEPACK,
	INT_TYPE_MAX = INT_GAMEPACK
} int_type_t;

void interrupt_init(void);

void interrupt_enable(int_type_t type, void (*func)(void));
void interrupt_disable(int_type_t type);


#endif /* INTERRUPT_H__ */
