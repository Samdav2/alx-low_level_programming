	section .data
    			hello db 'Hello, Holberton', 0

	section .text
    			global main

			extern printf

	main:
    		push hello
    		call printf
    		add rsp, 8  ; Adjust the stack pointer

    		; Exit the program
    		mov rdi, 0  ; Return 0 from main
    		call exit
