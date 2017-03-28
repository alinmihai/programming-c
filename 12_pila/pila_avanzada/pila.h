#include "estructuras.h"

void push(DatosPila *estudiantes, double *nota){

        estudiantes->pila[(estudiantes->cima)++]->Programacion = *nota;

}

double pop(DatosPila *estudiantes){

        return estudiantes->pila[--(estudiantes->cima)]->Programacion;

}
