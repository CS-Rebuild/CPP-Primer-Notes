	.file	"t16-36.cc"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -48(%rbp)
	movl	$42, -44(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -40(%rbp)
	leaq	-44(%rbp), %rax
	movq	%rax, -32(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, -24(%rbp)
	leaq	-44(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z2f1IPiEvT_S1_
	movq	-32(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z2f2IPiS0_EvT_T0_
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z2f1IPKiEvT_S2_
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z2f2IPKiS1_EvT_T0_
	movq	-24(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z2f2IPiPKiEvT_T0_
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.text._Z2f1IPiEvT_S1_,"axG",@progbits,_Z2f1IPiEvT_S1_,comdat
	.weak	_Z2f1IPiEvT_S1_
	.type	_Z2f1IPiEvT_S1_, @function
_Z2f1IPiEvT_S1_:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	_Z2f1IPiEvT_S1_, .-_Z2f1IPiEvT_S1_
	.section	.text._Z2f2IPiS0_EvT_T0_,"axG",@progbits,_Z2f2IPiS0_EvT_T0_,comdat
	.weak	_Z2f2IPiS0_EvT_T0_
	.type	_Z2f2IPiS0_EvT_T0_, @function
_Z2f2IPiS0_EvT_T0_:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	_Z2f2IPiS0_EvT_T0_, .-_Z2f2IPiS0_EvT_T0_
	.section	.text._Z2f1IPKiEvT_S2_,"axG",@progbits,_Z2f1IPKiEvT_S2_,comdat
	.weak	_Z2f1IPKiEvT_S2_
	.type	_Z2f1IPKiEvT_S2_, @function
_Z2f1IPKiEvT_S2_:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	_Z2f1IPKiEvT_S2_, .-_Z2f1IPKiEvT_S2_
	.section	.text._Z2f2IPKiS1_EvT_T0_,"axG",@progbits,_Z2f2IPKiS1_EvT_T0_,comdat
	.weak	_Z2f2IPKiS1_EvT_T0_
	.type	_Z2f2IPKiS1_EvT_T0_, @function
_Z2f2IPKiS1_EvT_T0_:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	_Z2f2IPKiS1_EvT_T0_, .-_Z2f2IPKiS1_EvT_T0_
	.section	.text._Z2f2IPiPKiEvT_T0_,"axG",@progbits,_Z2f2IPiPKiEvT_T0_,comdat
	.weak	_Z2f2IPiPKiEvT_T0_
	.type	_Z2f2IPiPKiEvT_T0_, @function
_Z2f2IPiPKiEvT_T0_:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	_Z2f2IPiPKiEvT_T0_, .-_Z2f2IPiPKiEvT_T0_
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
