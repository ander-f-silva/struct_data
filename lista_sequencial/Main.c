#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

int main(){
    printf("Declara a lista. \n");
    Lista *li;
    printf("Cria ponteiro. \n");
    li = cria_lista();
    printf("Libera a lista \n");
    libera_lista(li);
    printf("tamanho da lista \n");
    int x = tamanho_lista(li);
    printf("tamanho agora %d \n", x);
    return 0;
}
