.text
	ldr	r0, =bss_start
	ldr	r1, =bss_end
	mov	r2, #0
bssloop:
	cmp	r0, r1
	beq	maincall
	strb	r2, [r0], #1
	b	bssloop

maincall:
	b	main
loop:
	b	loop
