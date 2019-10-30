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
    x = lista_cheia(li);

    printf("lista esta cheia %d \n", x);
    x = lista_vazia(li);

    printf("lista esta vazia %d \n", x);
    Aluno dados_aluno;
    dados_aluno.matricula = 10;
    dados_aluno.nome[0] = 'A';
    dados_aluno.nome[1] = 'n';
    dados_aluno.nome[2] = 'd';
    dados_aluno.nome[3] = 'e';
    dados_aluno.nome[4] = 'r';
    dados_aluno.nome[5] = 's';
    dados_aluno.nome[6] = 'o';
    dados_aluno.nome[7] = 'n';
    dados_aluno.n1 = 10.0;

    x = insere_lista_final(li, dados_aluno);

    printf("inseri item no final da lista %d \n", x);

    Aluno dados_aluno_1;
    dados_aluno_1.matricula = 11;
    dados_aluno_1.nome[0] = 'A';
    dados_aluno_1.nome[1] = 'n';
    dados_aluno_1.nome[2] = 'd';
    dados_aluno_1.nome[3] = 'e';
    dados_aluno_1.nome[4] = 'r';
    dados_aluno_1.nome[5] = 's';
    dados_aluno_1.nome[6] = 'o';
    dados_aluno_1.nome[7] = 'n';
    dados_aluno_1.n1 = 10.0;

    x = insere_lista_inicio(li, dados_aluno_1);

    printf("inseri item da lista  %d \n", x);

    Aluno dados_aluno_2;
    dados_aluno_2.matricula = 12;
    dados_aluno_2.nome[0] = 'A';
    dados_aluno_2.nome[1] = 'n';
    dados_aluno_2.nome[2] = 'd';
    dados_aluno_2.nome[3] = 'e';
    dados_aluno_2.nome[4] = 'r';
    dados_aluno_2.nome[5] = 's';
    dados_aluno_2.nome[6] = 'o';
    dados_aluno_2.nome[7] = 'n';
    dados_aluno_2.n1 = 10.0;

    x = insere_lista_ordenada(li, dados_aluno_2);

    printf("inseri item ordenado %d \n", x);

    printf("inseri item no inicio da lista %d \n", x);

    Aluno dados_aluno_3;
    dados_aluno_3.matricula = 13;
    dados_aluno_3.nome[0] = 'A';
    dados_aluno_3.nome[1] = 'n';
    dados_aluno_3.nome[2] = 'a';
    dados_aluno_3.n1 = 10.0;
    dados_aluno_3.n2 = 10.0;

    x = insere_lista_ordenada(li, dados_aluno_3);

    printf("inseri item ordenado %d \n", x);

    x = tamanho_lista(li);
    printf("tamanho da lista agora %d \n", x);

    printf("Remove item no fim\n");
    x = remove_lista_final(li);

    x = tamanho_lista(li);
    printf("tamanho da lista agora %d \n", x);

    printf("Remove item no inicio\n");
    x = remove_lista_inicio(li);

    x = tamanho_lista(li);
    printf("tamanho da lista agora %d \n", x);

    dados_aluno_3;
    dados_aluno_3.matricula = 13;
    dados_aluno_3.nome[0] = 'A';
    dados_aluno_3.nome[1] = 'n';
    dados_aluno_3.nome[2] = 'a';
    dados_aluno_3.n1 = 10.0;
    dados_aluno_3.n2 = 10.0;

    x = insere_lista_ordenada(li, dados_aluno_3);

    x = tamanho_lista(li);
    printf("tamanho da lista agora %d \n", x);

    int matricula_aluno = 12;

    x = remove_lista(li, matricula_aluno);

    x = tamanho_lista(li);
    printf("tamanho da lista agora %d \n", x);

    return 0;
}
