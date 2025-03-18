#include <stdio.h>
#include <stdlib.h>

int main (){
    int *ponteiro;
    ponteiro = (int*) calloc(5, sizeof(int));

    if (ponteiro != NULL){
        int i;
        for(i = 0; i <5; i++){
            printf("%d", ponteiro[i]);
        }
        free(ponteiro);
    }else{
        printf("Erro na alocação de memória.");
    }
}