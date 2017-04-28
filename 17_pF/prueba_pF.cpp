#include <stdio.h>
#include <stdlib.h>

// enum TOp = {suma, resta, mul, div};

int sumar (int op1, int op2){

    return op1 + op2;
}

int restar (int op1, int op2){

    return op1 - op2;
}

int mul (int op1, int op2){

    return op1 * op2;
}

int divi (int op1, int op2){

    return op1 / op2;
}

int main (int argc, char *argv[]){

    int o1 = 3;
    int o2 = 2;

    int (*pF[4]) (int, int) = {
        &sumar,
        &restar,
        &mul,
        &divi
    };

    printf("Resultado: %i", (*pF[3]) (o1, o2));

    printf("\n\n");

	return EXIT_SUCCESS;
}
