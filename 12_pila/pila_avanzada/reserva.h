#include "estructuras.h"

void ReservaDatos(DatosPila *estudiantes){

        for(int i=0; i<N; i++){
        estudiantes->historial[i] = (NotasAlumno *)malloc(sizeof(NotasAlumno));
        estudiantes->pila[i] = (NotasAlumno *)malloc(sizeof(NotasAlumno));
        }
}

void liberar(DatosPila *estudiantes){

        for(int i=0; i<N; i++){
        free (estudiantes->historial[i]);
        free (estudiantes->pila[i]);
        }
}

