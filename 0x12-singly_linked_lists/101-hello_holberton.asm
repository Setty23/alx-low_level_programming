	  global   start
          extern   printf
start:
	  mov   edi, message
	  xor   eax, eax
	  call  printf
          mov   eax, 0
          ret

message: db "Hello, Holberton\n", 0

