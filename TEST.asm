global _start
 
section .text
 
_start:
 
 
	sub esp, 32	
	xor ebp,ebp
read_byte:
	mov eax, 3		
	xor ebx,ebx			
	lea ecx, [esp+ebp]	
	mov edx, 1
	int 0x80
 
	cmp [esp+ebp], byte 0x20
	je word_done
	cmp [esp+ebp], byte 0x0A
	je word_done
	cmp [esp+ebp], byte 0x0D 
	je word_done
 
	inc ebp
	jmp read_byte
 
word_done:
	mov [esp+ebp+1], byte 0x0A
	cmp ebp, 2
	je two_digits
 
 
two_digits:
	cmp [esp+ebp-2], byte '4'
	jne print
	cmp [esp+ebp-1], byte '2'
	je exit
 
print:
	mov	eax,4		;system call number (sys_write)
	mov	ebx,1		;file descriptor (stdout)
	mov ecx, esp	;message to write
	lea	edx, [ebp+1]	;message length
	int	0x80	;call kernel
	xor ebp,ebp
	jmp read_byte
 
exit:
	mov	eax, 1		; sys_exit()
	xor	ebx,ebx		; exit code 0
	int	0x80     	; syscall
	int 3
	
atoi:
	mov ecx, [esp+4]
	call strlen
	xor ebx,ebx

strlen:
	xor eax, eax 
	dec eax
	
Lloop:
	inc eax
	cmp [ecx+eax], byte 0
	jne Lloop
	ret
 
