#include <stdio.h>
#include <stdlib.h>

#define MAX 20

struct TPolinomio {
    double pol[MAX];
    int grado;
};

int main (int argc, char *argv[]){

    struct TPolinomio polinomio;
    double x;
    double resultado = 0;
    double potencia = 1;

    printf("Dale un valor a la x: ");
    scanf(" %lf", &x);

    printf("Indica de que grado es el polinomio: ");
    scanf(" %i", &polinomio.grado);

    printf("Introduce los coeficientes del polinomio: ");

    for (int i = 0; i <= polinomio.grado; i++)
    scanf(" %lf", &polinomio.pol[i]);

    for (int pos = 0; pos <= polinomio.grado; pos++, potencia*=x)
        resultado += polinomio.pol[pos] * potencia;

    printf("El resultado es: %.2lf", resultado);

    printf("\n\n");

	return EXIT_SUCCESS;
}
