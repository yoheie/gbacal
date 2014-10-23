AS = as-arm
CC = gcc-arm
LD = ld-arm

SRCS = $(wildcard *.c)
ASMS = $(wildcard *.s)

OBJS = ${SRCS:.c=.o} ${ASMS:.s=.o}
DEPS = ${SRCS:.c=.d}

.PHONY:	all clean depend

all: gbacal.bin

gbacal.bin: gbacal.elf
	objcopy-arm -O binary $< $@

gbacal.elf: ${OBJS} gba.ls
	${LD} -o $@ -T gba.ls ${OBJS}

%.o: %.s
	${AS} $< -o $@

%.o: %.c
	${CC} -c $< -o $@

%.d: %.c
	${CC} -MM $< | sed "s/:/ $@:/" > $@ ; \
	test -s $@ || rm -f $@ ; \
	test -s $@

clean:
	rm -f gbacal.bin gbacal.elf ${OBJS} ${DEPS}

depend: ${DEPS}

ifneq (${MAKECMDGOALS},depend)
ifneq (${MAKECMDGOALS},clean)
include ${DEPS}
endif
endif
