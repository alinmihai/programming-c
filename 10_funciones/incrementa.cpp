#include <stdio.h>
#include <stdlib.h>

void incrementa(int *op1, int op2){

    *op1 += op2;
}

int main (int argc, char *argv[]){

    int a = 2, b = 5;

    incrementa(&a, 5);
    incrementa(&b, 3);
    incrementa(&a, -2);

	return EXIT_SUCCESS;
}
