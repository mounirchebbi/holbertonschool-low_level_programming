; printing text to output using assembly code
; we will call the write syscall
; in c write (0 or 1 or 2 for stdin stdout stderr, string, string size)
global main
section .text:
main:
mov eax, 0x4
mov ebx, 1
mov ecx, stringdata
mov edx, stringsize
int 0x80
mov eax, 0x1
mov ebx,0
int 0x80

section .data:
stringdata: db "Hello, Holberton", 0XA
stringsize equ $-stringdata
