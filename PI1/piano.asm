section .data
section .bss
  Frecuencia resw 1
  Color resw 1
  Tecla resw 1
section .text
global Tecla_Presionada


Tecla_Presionada:

MOV al,dil

CMP al, 49
JE Fin

CMP al, 11
JE Tecla_Do

CMP al, 21
JE Tecla_Do_

CMP al, 31
JE Tecla_Re

CMP al, 41
JE Tecla_Re_

CMP al, 51
JE Tecla_Mi

CMP al, 61
JE Tecla_Fa

CMP al, 71
JE Tecla_Fa_

CMP al, 81
JE Tecla_Sol

CMP al, 91
JE Tecla_Sol_

CMP al, 101
JE Tecla_La

CMP al, 111
JE Tecla_La_

CMP al, 121
JE Tecla_Si

JMP Tecla_Presionada



;SubRutinas de cada Nota

Tecla_Do:
MOV eax, 261 ;Faltan decimales
MOV [Frecuencia], eax
ret

Tecla_Do_:
MOV eax, 277
MOV [Frecuencia], eax
ret

Tecla_Re:
MOV eax, 293
MOV [Frecuencia], eax
ret

Tecla_Re_:
MOV eax, 311
MOV [Frecuencia], eax
ret

Tecla_Mi:
MOV eax, 329
MOV [Frecuencia], eax
ret

Tecla_Fa:
MOV eax, 349
MOV [Frecuencia], eax
ret

Tecla_Fa_:
MOV eax, 739
MOV [Frecuencia], eax
ret

Tecla_Sol:
MOV eax, 783
MOV [Frecuencia], eax
ret

Tecla_Sol_:
MOV eax, 830
MOV [Frecuencia], eax
ret

Tecla_La:
MOV eax, 880
MOV [Frecuencia], eax
ret

Tecla_La_:
MOV eax, 932
MOV [Frecuencia], eax
ret

Tecla_Si:
MOV eax, 987
MOV [Frecuencia], eax
ret


Fin:
ret
