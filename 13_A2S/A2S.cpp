#include <stdio.h>
#include <stdlib.h>

struct TCoordenada{
    int columna;
    int fila;
};

struct TCoordenada A2S(struct TCoordenada a_pos){

    struct TCoordenada s_pos;
    s_pos.columna = 2 * a_pos.columna;
    s_pos.fila = 2 * a_pos.fila;

    return s_pos;

}

int main (int argc, char *argv[]){

    struct TCoordenada posicion = { 2, 3  },
                       buffer;

    buffer = A2S(posicion);
    printf("\n\t( %i, %i  ) => ( %i, %i  )\n",
            posicion.columna, posicion.fila,
            buffer.columna, buffer.fila);

    printf("\n");

	return EXIT_SUCCESS;
}
