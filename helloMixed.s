section .data
msg db 'Hello, world! LA MEZCLA FUNCIONA \n', 0xa
len equ $ - msg
section .text
  global _start
    global asmPrint
asmPrint: ;tell linker entry point
   mov edx,len
   mov ecx,msg
   mov ebx,1
   mov eax,4
   int 0x80
   mov eax,1 ;call system number (sys_exit)
   int 0x80 ;call kernel