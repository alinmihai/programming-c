#include <stdio.h>
#include <stdlib.h>

#define N 10

void push(int pila[N], int *cima, int numero){

    pila[(*cima)++] = numero;

}

int pop(int pila[N], int *cima){

    return pila[--(*cima)];

}

int main (int argc, char *argv[]){

    int pila[N];
    int cima = 0;

    push(pila, &cima, 10);
    push(pila, &cima, 6);
    push(pila, &cima, 2);

    printf("%i", pop(pila, &cima));

    printf("\n\n");

	return EXIT_SUCCESS;
}
