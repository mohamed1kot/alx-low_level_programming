section		.text
	extern printf
	global main
section 	.data
	massege db "Hello, Holberton", 0xa, 0
main:
	mov		edi, massege
	mov 		eax, 0
	call 	printf
