	.file	"procprob2.c"
	.text
	.globl	procprob2
	.type	procprob2, @function
procprob2:
.LFB0:
	.cfi_startproc
	addb	%sil, (%rcx)
	movslq	%edi, %rdi
	addq	%rdi, (%rdx)
	movl	$6, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	procprob2, .-procprob2
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
