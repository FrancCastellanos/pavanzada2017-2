LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c kata3.c
	 gcc -c main.c
	 gcc -o kata3.exe kata3.o main.o $(LIB)

test_kata3: clean
	 gcc -c kata3.c
	 gcc -c test_kata3.c
	 gcc -o test_kata3.exe kata3.o test_kata3.o
	 ./test_kata3.exe

test:	 test_kata3

clean:
	 rm *.out *.o *.exe || exit 0

kata3: clean
	 gcc -c kata3.c
	 gcc -c main.c
	 gcc -o kata3.exe kata3.o main.o $(LIB)

run: kata3
	 ./kata3.exe

runtest: kata3
	 ./integrationtest.tcl ./kata3.exe

