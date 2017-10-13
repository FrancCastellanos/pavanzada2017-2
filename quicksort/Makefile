LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c quicksort.c
	 gcc -c main.c
	 gcc -o quicksort.exe quicksort.o main.o $(LIB)

test_quicksort: clean
	 gcc -c quicksort.c
	 gcc -c test_quicksort.c
	 gcc -o test_quicksort.exe quicksort.o test_quicksort.o
	 ./test_quicksort.exe

test:	 test_quicksort

clean:
	 rm *.out *.o *.exe || exit 0

quicksort: clean
	 gcc -c quicksort.c
	 gcc -c main.c
	 gcc -o quicksort.exe quicksort.o main.o $(LIB)

run: quicksort
	 ./quicksort.exe

runtest: quicksort
	 ./integrationtest.tcl ./quicksort.exe

