#include <stdlib.h>
#include <stdio.h>
#include "quicksort.h"
#include <string.h>

typedef struct s{
	char *name;
	int matricula;
}Student;

/* Add function signatures here */
int cmpNames( void *element1, void *element2){
	Student student1 = (Student *) element1;
	Student student2 = (Student *) element2;

	return strcmp(student1->name, student2->name);
}

int cmpMatriculas( void *element1, void *element2){
	Student student1 = (Student *) element1;
	Student student2 = (Student *) element2;

	return strcmp(student1->matricula - student2->matricula);
}

int main(int argc, char **argv) {
  char order[20];
  Student group[3];

  group[0].name = strdup("juanito");
  group[0].matricula = 17;

  group[1].name = strdup("mariana");
  group[1].matricula = 2;
  
  group[2].name = strdup("pedro");
  group[2].matricula = 4;
  
  printf("Give me the order: ");
  scang("%s",order);

  if(!strcmp(order,"name")){
  	quicksort(group,3,sizeof(Student),cmpNames);
  }
  
  if(!strcmp(order,"matricula")){
  	quicksort(group,3,sizeof(Student),cmpMatriculas);
  }
  

  for(i=0; i<3; i++){
  	printf("Student %s %d \n", gorup[i].name,group[i].matricula);
  }

  return 0;
}