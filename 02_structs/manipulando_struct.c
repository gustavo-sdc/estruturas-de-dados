#include <stdio.h>
#include <string.h>

struct Paciente *pPaciente = (struct Paciente *)
malloc(sizeof(struct Paciente));

if (pPaciente!= NULL){
    strcpy(pPaciente->nome, "Ana Costa");
    pPaciente->idade = 28;
    strcpy(pPaciente->telefone, "54321-9876");

    printf("Nome: %s\n", pPaciente->nome);
    printf("Idade: %s\n", pPaciente->idade);
    printf("Telefone: %s\n", pPaciente->telefone);
    free(pPaciente);
}