section .data
	message db "hello, holberton", 0xa

section .test
	global main

main:

	mov ah, 09h
	mov dx, message
	int 21h

	mov ah, 4ch
	xor al, al
	int 21h
