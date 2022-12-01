section .data
  Frecuencias: dd 261, 277,293,311,329,349,369,391,415,440,446,493,523,554,587,622,659,698,739,783,830,880,932,987
  Volumen: dd 100
section .bss
    Escalar: resw 2
section .text
global Tecla_Presionada


Tecla_Presionada:

mov [Escalar], edi
MOV al,dil


CMP al, 49
JE Obtener_Volumen

CMP al,50
JE Bajar_Volumen

CMP al,51
JE Aumentar_Volumen

JMP Tecla_Reproducir


Obtener_Volumen:
  MOV eax, [Volumen]
  ret

Bajar_Volumen:
  MOV eax, [Volumen]
  SUB eax, 10
  MOV [Volumen],eax
  ret

Aumentar_Volumen:
  MOV eax, [Volumen]
  ADD eax, 10
  MOV [Volumen],eax
  ret

Tecla_Reproducir:

  mov eax, [Escalar]
  mov r8, 4
  MUL r8
  MOV r8, rax
  MOV eax, [Frecuencias+r8]
;    mov eax, 261
  ret


