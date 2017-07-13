#include <stdio.h>
#include <stdlib.h>

// Hacer un programa que, de una lista de n números, calcule la media.

int main (int argc, char *argv[]){

	int count = 1, n;
	float sum = 0, x, average;

	printf("¿Cuántos números habrá en la lista?: ");
	scanf(" %i", &n);

	while (count <= n) {
		printf("x = ");
		scanf(" %f", &x);
		sum += x;
		++count;
	}

	average = sum/n;

	printf("La media es: %.2f\n", average);

	return EXIT_SUCCESS;
}
