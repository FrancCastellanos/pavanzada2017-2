LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c miniproy2.c
	 gcc -c main.c
	 gcc -o miniproy2.exe miniproy2.o main.o $(LIB)

test_miniproy2: clean
	 gcc -c miniproy2.c
	 gcc -c test_miniproy2.c
	 gcc -o test_miniproy2.exe miniproy2.o test_miniproy2.o
	 ./test_miniproy2.exe

test:	 test_miniproy2

clean:
	 rm *.out *.o *.exe || exit 0

miniproy2: clean
	 gcc -c miniproy2.c
	 gcc -c main.c
	 gcc -o miniproy2.exe miniproy2.o main.o $(LIB)

run: miniproy2
	 ./miniproy2.exe

runtest: miniproy2
	 ./integrationtest.tcl ./miniproy2.exe

