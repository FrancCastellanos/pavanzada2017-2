#include <stdio.h>
#include "minunit.h"
#include "kata3.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int testsRun = 0;

static char * testExample() {
    char temp_input[4][7] = {"Hello", "Alaska", "Dad", "Peace"};
    int size = 4;
    char **input = malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++) {
        input[i] = malloc(256 * sizeof(char));
        strcpy(input[i], temp_input[i]);
    }
    int return_size;
    char **output = findWords(input, 4, &return_size);
    printf("Array of size: %d [", return_size);
    for(int i = 0; i < return_size; i++) {
        printf("%s", output[i]);
        if (i < return_size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
  mu_assert("Wrong output!", output != NULL && output[0][0] == 'A' && output[1][0] == 'D');
  return 0;
}

static char * testRows() {
    char temp_input[3][5] = {"You", "Sal", "Cnn"};
    int size = 3;
    char **input = malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++) {
        input[i] = malloc(256 * sizeof(char));
        strcpy(input[i], temp_input[i]);
    }
    int return_size;
    char **output = findWords(input, 3, &return_size);
    printf("Array of size: %d [", return_size);
    for(int i = 0; i < return_size; i++) {
        printf("%s", output[i]);
        if (i < return_size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
  mu_assert("Wrong output!", output != NULL && output[0][0] == 'Y' && output[1][0] == 'S' && output[2][0] == 'C');
  return 0;
}




static char * allCapsTest() {
    char temp_input[7][8] = {"PORQUE", "TU", "Y", "YO", "NUESTRO", "HAS", "PERRO"};
    int size = 7;
    char **input = malloc(size * sizeof(char *));
    for (int i = 0; i < size; i++) {
        input[i] = malloc(256 * sizeof(char));
        strcpy(input[i], temp_input[i]);
    }
    int return_size;
    char **output = findWords(input, size, &return_size);
    printf("Array of size: %d [", return_size);
    for(int i = 0; i < return_size; i++) {
        printf("%s", output[i]);
        if (i < return_size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
  mu_assert("Wrong output!", output != NULL && output[0][0] == 'P' && output[1][0] == 'T' && output[2][0] == 'Y' && output[3][0] == 'Y' && output[4][0] == 'H' && output[5][0] == 'P');
  return 0;
}

static char * allTests() {
  mu_run_test(testExample);
  mu_run_test(allCapsTest);
  mu_run_test(testRows);

  return 0;
}

int main(int argc, char **argv) {
  char *result = allTests();
  if (result != 0) {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( X .X)  +     + \n");
    printf("_-_-_-_-_-_-_- \"\"  \"\" \n");
    printf(KRED "✗ %s \n" RESET, result);
  }
  else {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( ^ .^)  +     + \n");
    printf("_-_-_-_-_-_-_-  \"\"  \"\" \n");
    printf(KGRN " ✓ ALL TESTS PASSED \n" RESET);
  }
  printf("Tests run: %d\n", testsRun);
  return result != 0;
}
