#include <stdio.h>
#include <stdlib.h>

#define INC 0.5

double x_cuadrado (double x){

    return x*x;
}

double diferencia (double op1, double op2, double op3, double op4){

    return (op1 - op2) / (op3 - op4);
}

int main (int argc, char *argv[]){

    double num1, num2, dob1, dob2;
    double dif;

    printf("Número 1: ");
    scanf(" %lf", &num1);
    num2 = num1 + INC;

    dob1 = x_cuadrado(num1);
    dob2 = x_cuadrado(num2);
    dif = diferencia(dob1, dob2, num1, num2);

    printf("%.2lf", dif);

    printf("\n\n");

	return EXIT_SUCCESS;
}
