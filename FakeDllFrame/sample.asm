

PUBLIC retaddr
PUBLIC retaddr2

.DATA
	szStr		db "<ss>success</ss> ",10,10,0
	retaddr		dq ?
	retaddr2	dq ?

.CODE

StubFunc PROC
		mov rdx, offset szStr
		mov rdi, rdx
		mov rbx, rcx
		mov rax, retaddr
		mov r8d, 13h
		mov [rsp+20h], r8d
		jmp rax

StubFunc ENDP

CheckFunc PROC
		mov dword ptr[rcx+3Ch], 1h		;isReged
		mov dword ptr[rcx+30h], 999		;用户数
		mov dword ptr[rcx+2Ch], 0		;注册类型, 1 Site
		mov eax, 0DBh
		mov rbx, retaddr2
		jmp rbx

CheckFunc ENDP

END
