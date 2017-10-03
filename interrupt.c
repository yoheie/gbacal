#include "interrupt.h"

#define INT_ENTRY_REG  (*(void (* volatile *)(void))0x03007FFC)

#define INT_ENABLE_REG (*(volatile unsigned short *)0x04000200)
#define INT_FLAG_REG   (*(volatile unsigned short *)0x04000202)
#define INT_MASTER_REG (*(volatile unsigned short *)0x04000208)

static void interrupt(void);

static void (*int_callback[INT_TYPE_MAX - INT_TYPE_MIN + 1])(void);

void interrupt_init(void)
{
	INT_ENTRY_REG = interrupt;
	INT_ENABLE_REG = 0;
	INT_MASTER_REG = 1;
}

void interrupt_enable(int_type_t type, void (*func)(void))
{
	int_callback[type] = func;
	INT_FLAG_REG = (1u << type);
	INT_ENABLE_REG |= (1u << type);
}

void interrupt_disable(int_type_t type)
{
	INT_ENABLE_REG &= ~(1u << type);
}

static void interrupt(void)
{
	int i;

	for (i = INT_TYPE_MIN; i <= INT_TYPE_MAX; i++) {
		if ((INT_ENABLE_REG & (1u << i))
		 && (INT_FLAG_REG & (1u << i))
		) {
			INT_FLAG_REG = (1u << i);
			(*int_callback[i])();
		}
	}
}
