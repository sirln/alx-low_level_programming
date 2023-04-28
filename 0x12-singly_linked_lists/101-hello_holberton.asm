section .data
	msg db 'Hello, Holberton', 0
	format db '%s', 10, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, format
	mov rsi, msg
	xor rax, rax
	call printf

	xor eax, eax

	leave
	ret
