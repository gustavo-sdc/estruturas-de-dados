#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 10;
    int *ponteiroInt = &numero; // ponteiro para um ponteiro

    printf("Valor de número: %d\n", numero);
    printf("Endereco de número %p\n", ponteiroInt);
    printf("Valor apontado por ponteiroInt: %d\n", *ponteiroInt);

    *ponteiroInt = 20;
    printf("Novo valor de número após modificado pelo ponteiro %d\n", numero);

    int *ponteiroDinamico;
    ponteiroDinamico = (int*) malloc(sizeof(int));

    if (ponteiroDinamico == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }

    *ponteiroDinamico = 50;
    printf("Valor armazenado na memoria alocada dinamicamente %d\n", *ponteiroDinamico);


    free(ponteiroDinamico);
    ponteiroDinamico = NULL;

    if(ponteiroDinamico = NULL){
        printf("Memoria foi liberada corretamente e o ponteiro está invalido. \n");
    }

    return 0;

}