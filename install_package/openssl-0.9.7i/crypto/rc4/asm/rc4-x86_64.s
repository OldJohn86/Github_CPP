.text

.globl	RC4
.type	RC4,@function
.align	16
RC4:	or	%rsi,%rsi
	jne	.Lentry
	.byte	0xF3,0xC3
.Lentry:
	push	%r12
	push	%r13

	add	$2,%rdi
	movzb	-2(%rdi),%r8d
	movzb	-1(%rdi),%r12d

	add	$1,%r8b
	movzb	(%rdi,%r8),%r9d
	test	$-8,%rsi
	jz	.Lcloop1
	push	%rbx
.align	16	# incidentally aligned already
.Lcloop8:
	mov	(%rdx),%eax
	mov	4(%rdx),%ebx
	add	%r9b,%r12b
	lea	1(%r8),%r10
	movzb	(%rdi,%r12),%r13d
	movzb	%r10b,%r10d
	movzb	(%rdi,%r10),%r11d
	movb	%r9b,(%rdi,%r12)
	cmp	%r10,%r12
	movb	%r13b,(%rdi,%r8)
	jne	.Lcmov0			# Intel cmov is sloooow...
	mov	%r9,%r11
.Lcmov0:
	add	%r9b,%r13b
	xor	(%rdi,%r13),%al
	ror	$8,%eax
	add	%r11b,%r12b
	lea	1(%r10),%r8
	movzb	(%rdi,%r12),%r13d
	movzb	%r8b,%r8d
	movzb	(%rdi,%r8),%r9d
	movb	%r11b,(%rdi,%r12)
	cmp	%r8,%r12
	movb	%r13b,(%rdi,%r10)
	jne	.Lcmov1			# Intel cmov is sloooow...
	mov	%r11,%r9
.Lcmov1:
	add	%r11b,%r13b
	xor	(%rdi,%r13),%al
	ror	$8,%eax
	add	%r9b,%r12b
	lea	1(%r8),%r10
	movzb	(%rdi,%r12),%r13d
	movzb	%r10b,%r10d
	movzb	(%rdi,%r10),%r11d
	movb	%r9b,(%rdi,%r12)
	cmp	%r10,%r12
	movb	%r13b,(%rdi,%r8)
	jne	.Lcmov2			# Intel cmov is sloooow...
	mov	%r9,%r11
.Lcmov2:
	add	%r9b,%r13b
	xor	(%rdi,%r13),%al
	ror	$8,%eax
	add	%r11b,%r12b
	lea	1(%r10),%r8
	movzb	(%rdi,%r12),%r13d
	movzb	%r8b,%r8d
	movzb	(%rdi,%r8),%r9d
	movb	%r11b,(%rdi,%r12)
	cmp	%r8,%r12
	movb	%r13b,(%rdi,%r10)
	jne	.Lcmov3			# Intel cmov is sloooow...
	mov	%r11,%r9
.Lcmov3:
	add	%r11b,%r13b
	xor	(%rdi,%r13),%al
	ror	$8,%eax
	add	%r9b,%r12b
	lea	1(%r8),%r10
	movzb	(%rdi,%r12),%r13d
	movzb	%r10b,%r10d
	movzb	(%rdi,%r10),%r11d
	movb	%r9b,(%rdi,%r12)
	cmp	%r10,%r12
	movb	%r13b,(%rdi,%r8)
	jne	.Lcmov4			# Intel cmov is sloooow...
	mov	%r9,%r11
.Lcmov4:
	add	%r9b,%r13b
	xor	(%rdi,%r13),%bl
	ror	$8,%ebx
	add	%r11b,%r12b
	lea	1(%r10),%r8
	movzb	(%rdi,%r12),%r13d
	movzb	%r8b,%r8d
	movzb	(%rdi,%r8),%r9d
	movb	%r11b,(%rdi,%r12)
	cmp	%r8,%r12
	movb	%r13b,(%rdi,%r10)
	jne	.Lcmov5			# Intel cmov is sloooow...
	mov	%r11,%r9
.Lcmov5:
	add	%r11b,%r13b
	xor	(%rdi,%r13),%bl
	ror	$8,%ebx
	add	%r9b,%r12b
	lea	1(%r8),%r10
	movzb	(%rdi,%r12),%r13d
	movzb	%r10b,%r10d
	movzb	(%rdi,%r10),%r11d
	movb	%r9b,(%rdi,%r12)
	cmp	%r10,%r12
	movb	%r13b,(%rdi,%r8)
	jne	.Lcmov6			# Intel cmov is sloooow...
	mov	%r9,%r11
.Lcmov6:
	add	%r9b,%r13b
	xor	(%rdi,%r13),%bl
	ror	$8,%ebx
	add	%r11b,%r12b
	lea	1(%r10),%r8
	movzb	(%rdi,%r12),%r13d
	movzb	%r8b,%r8d
	movzb	(%rdi,%r8),%r9d
	movb	%r11b,(%rdi,%r12)
	cmp	%r8,%r12
	movb	%r13b,(%rdi,%r10)
	jne	.Lcmov7			# Intel cmov is sloooow...
	mov	%r11,%r9
.Lcmov7:
	add	%r11b,%r13b
	xor	(%rdi,%r13),%bl
	ror	$8,%ebx
	lea	-8(%rsi),%rsi
	mov	%eax,(%rcx)
	lea	8(%rdx),%rdx
	mov	%ebx,4(%rcx)
	lea	8(%rcx),%rcx

	test	$-8,%rsi
	jnz	.Lcloop8
	pop	%rbx
	cmp	$0,%rsi
	jne	.Lcloop1
.Lexit:
	sub	$1,%r8b
	movb	%r8b,-2(%rdi)
	movb	%r12b,-1(%rdi)

	pop	%r13
	pop	%r12
	.byte	0xF3,0xC3

.align	16
.Lcloop1:
	add	%r9b,%r12b
	movzb	(%rdi,%r12),%r13d
	movb	%r9b,(%rdi,%r12)
	movb	%r13b,(%rdi,%r8)
	add	%r9b,%r13b
	add	$1,%r8b
	movzb	(%rdi,%r13),%r13d
	movzb	(%rdi,%r8),%r9d
	xorb	(%rdx),%r13b
	lea	1(%rdx),%rdx
	movb	%r13b,(%rcx)
	lea	1(%rcx),%rcx
	sub	$1,%rsi
	jnz	.Lcloop1
	jmp	.Lexit
.size	RC4,.-RC4
