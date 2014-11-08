AS = as-arm
CC = gcc-arm
LD = ld-arm

ASFLAGS =
CFLAGS  =
LDFLAGS =

SRCS = $(wildcard *.c)
ASMS = $(wildcard *.s)

IMGS = image/all.img

OBJS = ${SRCS:.c=.o} ${ASMS:.s=.o} ${IMGS:.img=.o}
DEPS = ${SRCS:.c=.d}

.PHONY:	all clean depend

all: gbacal.bin

gbacal.bin: gbacal.elf
	objcopy-arm -O binary $< $@

gbacal.elf: ${OBJS} gba.ls
	${LD} ${LDFLAGS} -o $@ -T gba.ls ${OBJS}

%.o: %.s
	${AS} ${ASFLAGS} $< -o $@

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

%.o: %.img
	objcopy-arm -I binary -O elf32-littlearm -B armv4t $< $@

%.d: %.c
	${CC} ${CFLAGS} -MM -MP $< | sed "s/o:/o $@:/" > $@ ; \
	test -s $@ || rm -f $@ ; \
	test -s $@

${OBJS} ${DEPS}: Makefile

clean:
	rm -f gbacal.bin gbacal.elf ${OBJS} ${DEPS}

depend: ${DEPS}

ifneq (${MAKECMDGOALS},depend)
ifneq (${MAKECMDGOALS},clean)
include ${DEPS}
endif
endif
