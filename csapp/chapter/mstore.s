	.file	"mstore.c"
	.intel_syntax noprefix
	.text
	.globl	mulstore
	.type	mulstore, @function
mulstore:
.LFB0:
	.cfi_startproc
	push	rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	mov	rbx, rdx
	call	mult2
	mov	QWORD PTR [rbx], rax
	pop	rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	mulstore, .-mulstore
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
