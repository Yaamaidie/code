	.file	"fact_while_jm_goto.c"
	.text
	.globl	fact_while_jm_goto
	.type	fact_while_jm_goto, @function
fact_while_jm_goto:
.LFB0:
	.cfi_startproc
	movl	$1, %eax
	jmp	.L2
.L3:
	imulq	%rdi, %rax
	subq	$1, %rdi
.L2:
	cmpq	$1, %rdi
	jg	.L3
	rep ret
	.cfi_endproc
.LFE0:
	.size	fact_while_jm_goto, .-fact_while_jm_goto
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
