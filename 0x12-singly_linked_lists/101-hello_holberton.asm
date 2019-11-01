global main

	section .text
main:
	MOV rax, 1
	MOV rdi, 1
	MOV rsi, msg
	MOV rdx, 17
	syscall

	MOV eax, 60
	XOR rdi, rdi
	syscall

msg:
	db "Hello, Holberton", 10
