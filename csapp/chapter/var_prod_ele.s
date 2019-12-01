	.file	"var_prod_ele.c"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB0:
	.text
.LHOTB0:
	.p2align 4,,15
	.globl	var_prod_ele
	.type	var_prod_ele, @function
var_prod_ele:
.LFB0:
	.cfi_startproc
	movslq	%edi, %rdi
	testq	%rdi, %rdi
	jle	.L4
	salq	$2, %rcx
	leaq	0(,%rdi,4), %r10
	xorl	%eax, %eax
	imulq	%rdi, %rcx
	xorl	%edx, %edx
	leaq	(%rsi,%rcx), %r9
	leaq	(%rsi,%r8,4), %rsi
	.p2align 4,,10
	.p2align 3
.L3:
	movl	(%rsi), %ecx
	addl	(%r9,%rdx,4), %ecx
	addq	$1, %rdx
	addq	%r10, %rsi
	addl	%ecx, %eax
	cmpq	%rdx, %rdi
	jne	.L3
	rep ret
.L4:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	var_prod_ele, .-var_prod_ele
	.section	.text.unlikely
.LCOLDE0:
	.text
.LHOTE0:
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
