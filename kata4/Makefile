LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c kata4.c
	 gcc -c main.c
	 gcc -o kata4.exe kata4.o main.o $(LIB)

test_kata4: clean
	 gcc -c kata4.c
	 gcc -c test_kata4.c
	 gcc -o test_kata4.exe kata4.o test_kata4.o
	 ./test_kata4.exe

test:	 test_kata4

clean:
	 rm *.out *.o *.exe || exit 0

kata4: clean
	 gcc -c kata4.c
	 gcc -c main.c
	 gcc -o kata4.exe kata4.o main.o $(LIB)

run: kata4
	 ./kata4.exe

runtest: kata4
	 ./integrationtest.tcl ./kata4.exe

