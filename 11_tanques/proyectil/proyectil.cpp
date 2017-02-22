#include <stdio.h>
#include <stdlib.h>

#define DELTA 0.1
#define MAXT 10
#define ax 0
#define ay -10

int main (int argc, char *argv[]){

    double vx;
    double vy;

    printf("Introduzca las velocidades de X e Y: ");
    scanf(" %lf %lf", &vx, &vy);

    for(double i=0; i<MAXT; i++){
        printf("\n\tX: %.2lf", vx += ax * DELTA);
        printf("\tY: %.2lf", vy += ay * DELTA);
    }

    printf("\n\n");

	return EXIT_SUCCESS;
}
