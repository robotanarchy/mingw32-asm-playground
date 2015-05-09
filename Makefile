CC:=LANG=C i686-w64-mingw32-gcc -Wall -g -Werror

main.exe: main.c dll.dll
	$(CC) main.c -o main.exe -Ldll


dll.dll: dll.c
	$(CC) -shared dll.c -o dll.dll


run: main.exe
	wine main.exe

pexports: dll.dll
	~/bin/pexports.sh dll.dll


.PHONY: run pexports
