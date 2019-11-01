#include <stdio.h>
#include <stdlib.h>
#include "ListaLigada.h"

int main(){
    printf("Declara o ponteiro do tipo lista ligada \n"); 
    Lista* li;
    printf("Cria lista ligada \n");
    li = cria_lista();
    printf("Libera a lista \n");
    libera_lista(li);
    return 0;
}
