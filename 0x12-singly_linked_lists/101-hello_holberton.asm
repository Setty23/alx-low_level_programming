	  global   start
          extern   printf
         
          section  .text
start:
	  mov   edi, message
	  xor   eax, eax
	  mov   eax, 0
          call  printf
	  ret
message: db "Hello, Holberton\n", 0

