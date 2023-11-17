section .data
    hello db 'Hello World',0

section .text
    global _start

_start:
    ; write syscall
    mov rax, 1          ; syscall number (sys_write)
    mov rdi, 1          ; file descriptor (stdout)
    mov rsi, hello      ; message to write
    mov rdx, 11         ; message length
    syscall             ; call kernel

    ; exit syscall
    mov rax, 60         ; syscall number (sys_exit)
    xor rdi, rdi        ; exit code
    syscall             ; call kernel
