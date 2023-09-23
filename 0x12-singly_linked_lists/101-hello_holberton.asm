section	.text
	global main
	extern printf
main:
	mov	edx,msg
	mov	eax,0
	call	printf
section	.data
	msg db 'Hello, Holberton', 0xa, 0
