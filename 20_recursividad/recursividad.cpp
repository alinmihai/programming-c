#include <stdio.h>
#include <stdlib.h>

bool es_primo (int p, int d){

    if (d==1)
        return true;

    return p%d!=0 && es_primo(p, (d-1));
}

int main (int argc, char *argv[]){

    int p_primo, div;

    printf("Inserte el número y los divisores: ");
    scanf(" %i, %i", &p_primo, &div);

    printf(" %i\n", es_primo(p_primo, div));

 	return EXIT_SUCCESS;
}
