#include <string.h>
#include <stdio.h>

struct Paciente {
  char nome[50];
  int idade;
  char telefone[15];
};


void exibirPaciente(struct Paciente p){
    printf("Nome: %s\n", p.nome);
    printf("idade: %d\n", p.idade);
    printf("Telefone: %n\n", p.telefone);
}


int main()
{
  struct Paciente paciente1 = {"Fernando", 22, "77777-8888"};
  exibirPaciente(paciente1);
  return 0;
}