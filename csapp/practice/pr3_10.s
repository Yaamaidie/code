	.file	"pr3_10.c"
	.text
	.globl	airth2
	.type	airth2, @function
airth2:
.LFB0:
	.cfi_startproc
	orq	%rdi, %rsi
	sarq	$3, %rsi
	notq	%rsi
	movq	%rdx, %rax
	subq	%rsi, %rax
	ret
	.cfi_endproc
.LFE0:
	.size	airth2, .-airth2
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
