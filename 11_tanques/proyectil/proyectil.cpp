#include <stdio.h>
#include <stdlib.h>

#define DELTA 0.1
#define MAXT 2
#define ax 0
#define ay -10

int main (int argc, char *argv[]){

    double vx = 20;
    double vy = 40;

    for(double i=0.1; i<MAXT; i+=DELTA){
        vx = vx + ax * DELTA;
        printf("X: %.2lf", vx);
        printf("\n");
    }

    for (double i=0.1; i<MAXT; i+=DELTA){
        vy = vy + ay * DELTA;
        printf("Y= %.2lf", vy);
        printf("\n");
    }

    printf("\n\n");

	return EXIT_SUCCESS;
}
