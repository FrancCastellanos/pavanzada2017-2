#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "word_constructor.h"


int main(int argc, char **argv)
{
	printf("Welcome, the letters availables are: t,e,l,f,o,j,a,e,b,e,g,d,o,n,o. \n\n");

        char array[100];
	char * message=array;
	char * scrabble="telfojaebegdono";

	printf("Please write a sentence\n");
    	scanf("%[^\n]", message);
	

	int result= constructor(message,scrabble);
	//printf("Result is: %d\n",result);
	
	return 0;
}
