#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int main (int argc, char *argv[]){

    double pol[MAX];
    double x, grado;
    double resultado = 0;
    double potencia = 1;

    printf("Dale un valor a la X: ");
    scanf(" %lf", &x);

    printf("Indica de que grado es el polinomio: ");
    scanf(" %lf", &grado);

    printf("Introduce los coeficientes del polinomio: ");

    for (int i = 0; i <= grado; i++);
    scanf(" %lf", &pol[i]);

    for (int pos = 0; pos <= grado; pos++, potencia *= x)
        resultado += pol[pos] * potencia;

    printf("El resultado es: %.2lf", resultado);

	return EXIT_SUCCESS;
}
