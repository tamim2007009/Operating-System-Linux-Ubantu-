compile:
	gcc -save-temps hello.c

run:
	gcc -E hello.c -o hello.i
	gcc -S hello.i -o hello.s
	gcc -c hello.s -o hello.o
	gcc hello.o -o hello.out
	./hello.out
	
#preprocessor
#	gcc -E hello.c -o hello.i
#compiler
#	gcc -S hello.i -o hello.s
#assembler
#	gcc -c hello.s -o hello.o
#linker
#	gcc hello.o -o hello.out

clean:
	rm -f *.o *.s *.i *.out 