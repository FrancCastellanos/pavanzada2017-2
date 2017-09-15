all:
	 gcc -c word_constructor.c
	 gcc -c main.c
	 gcc -o main.exe word_constructor.o main.o

test_ransom_note: clean
	 gcc -c word_constructor.c

test:	 test_ransom_note

clean:
	 rm *.out *.o *.exe *.gch || exit 0

run:
	 gcc -c word_constructor.c
	 gcc -c main.c
	 gcc -o main.exe word_constructor.o main.o
	 ./main.exe

