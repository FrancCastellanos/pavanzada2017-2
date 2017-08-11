#include <stdio.h>

int main(int argn, char ** args){
	int i;
	for(i=0;i<argn;i++){
		printf("hello world %s \n", argv[i]);
	}

	return 0;
}