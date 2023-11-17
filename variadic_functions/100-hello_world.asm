section .data
    hello db 'Hello, World', 10 ; The string to print, 10 is the ASCII value for newline

section .text
    global _start

_start:
    ; write syscall
    mov rax, 1          ; syscall number (sys_write)
    mov rdi, 1          ; file descriptor (stdout)
    mov rsi, hello      ; message to write
    mov rdx, 13         ; message length (including newline)
    syscall             ; call kernel

    ; exit syscall
    mov eax, 60         ; syscall number (sys_exit)
    xor edi, edi        ; exit code
    syscall             ; call kernel
