#include <string.h>
#include <stdio.h>

struct Pessoa {
  char nome[50];
  int idade;
  char telefone[15];
};


int main()
{
  struct Pessoa lista[3];
  int i;
  
  strcpy(lista[0].nome, "Alana");
  lista[0].idade = 18;
  strcpy(lista[0].telefone, "12345-5789");
  
  strcpy(lista[1].nome, "Lucas");
  lista[1].idade = 18;
  strcpy(lista[1].telefone, "12345-5789");
  
  strcpy(lista[2].nome, "Julia");
  lista[2].idade = 18;
  strcpy(lista[2].telefone, "12345-5789");
  
  for (i = 0; i<3; i++){
    printf("Nome: %s\n", lista[i].nome);
    printf("idade: %d\n", lista[i].idade);
    printf("Telefone: %n\n", lista[i].telefone);
  }
  
  return 0;
  
}