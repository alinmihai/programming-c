#include "estructuras.h"
#include "pila.h"
#include "reserva.h"

int main (int argc, char *argv[]){

    DatosPila estudiantes;
    estudiantes.cima = 0;
    double notas;

    ReservaDatos(&estudiantes);
    printf("Introduzca sus notas: \n");
    for(int i=0;i<N;i++){
        scanf(" %lf", &notas);
        push(&estudiantes, &notas);
    }

    printf("Ultimas 3 nota: %.2lf -> %.2lf -> %.2lf", pop(&estudiantes), pop(&estudiantes), pop(&estudiantes));

    printf("\n\n");

	return EXIT_SUCCESS;
}
