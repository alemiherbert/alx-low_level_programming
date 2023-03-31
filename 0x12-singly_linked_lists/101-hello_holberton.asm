; Hello, Holberton
	extern	printf					; C function, printf
	section .data					; Data section.
msg:	db "Hello, Holberton", 0	; The message to print
fmt:	db "%s", 10, 0				; The format string

	section .text					; Code section.

	global main						; the program label for the entry point
main:								; the entry point
	push	rbp						; save stack

	mov	rdi,fmt						; first argument to printf
	mov	rsi,msg						
	mov	rax,0						; normal, no error, return value
	call	printf					; call printf

	pop	rbp							; restore stack

	mov	rax,0						; normal, no error, return value
	ret								; return to caller
