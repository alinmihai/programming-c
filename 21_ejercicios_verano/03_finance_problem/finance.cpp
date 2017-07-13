#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Hacer un programa que calcule la cantidad final de un cliente que tiene cierta
// cantidad inicial (P) en el banco, con un interes (i) en una cantidad de años (n)
// mediante la formula: F=P(1+i)^n

int main (int argc, char *argv[]){

	double F, P, i, r, n;

	printf("Introduzca la cantidad inicial (P), el interés (r) y número de años (n)\n");
	scanf(" %lf, %lf, %lf", &P, &r, &n);

	i = r/100;

	F = P*pow((1+i), n);

	printf("Su cantidad final es de: %.2lf\n", F);

	return EXIT_SUCCESS;
}
