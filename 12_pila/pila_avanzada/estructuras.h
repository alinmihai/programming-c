#ifndef __ESTRUCTURAS_H__
#define __ESTRUCTURAS_H__

#include <stdio.h>
#include <stdlib.h>

#define N 10

typedef struct{

        double Programacion;
        double Bases;
        double Sistemas;

}NotasAlumno;

typedef struct{

        NotasAlumno *historial[N];
        NotasAlumno *pila[N];
        int cima;

}DatosPila;

#endif
