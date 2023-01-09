/*
   Atividade 16: Faça um programa que armazena filmes produzidos por vários diretores e:
                 → Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras),
                   quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após
                   ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
                 → Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o
                   processo até digitar uma string vazia.
   POR LUÍS H.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Filme
{
  char nome[30];
  int ano;
  int duracao;
};
typedef struct Filme Filme;

struct Diretor
{
  char nome[20];
  int quantidadeFilmes;
  struct Filme *filmes;
};
typedef struct Diretor Diretor;

int main()
{
  Diretor diretor[5];
  char nome[20];
  int i, j;
  
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome do  %dº diretor: ", i + 1);
    setbuf(stdin, NULL);
    fgets(diretor[i].nome, 20, stdin);
    
    printf("Digite a quantidade de filmes do %dº diretor: ", i + 1);
    scanf("%d", &diretor[i].quantidadeFilmes);
    
    diretor[i].filmes = (struct Filme *)malloc(diretor[i].quantidadeFilmes * sizeof(struct Filme));
    
    for(j = 0; j < diretor[i].quantidadeFilmes; j++)
    {
      printf("Digite o nome do filme %d do diretor %d: ", j + 1, i + 1);
      setbuf(stdin, NULL);
      fgets(diretor[i].filmes[j].nome, 20, stdin);

      printf("Digite o ano do filme %d do diretor %d: ", j + 1, i + 1);
      scanf("%d", &diretor[i].filmes[j].ano);

      printf("Digite a duração do filme %d do diretor %d: ", j + 1, i + 1);
      scanf("%d", &diretor[i].filmes[j].duracao);
    }
    printf("\n");
  }

  printf("Digite o nome do diretor que deseja procurar: ");
  setbuf(stdin, NULL);
  fgets(nome, 20, stdin);
    
  while(nome[0] != '\0')
  {
    for(i = 0; i < 5; i++)
    {
      if(strcmp(diretor[i].nome, nome) == 0)
      {
        printf("Filmes do diretor %s: ", diretor[i].nome);
        for(j = 0; j < diretor[i].quantidadeFilmes; j++)
        {
          printf("%s (%d), ", diretor[i].filmes[j].nome, diretor[i].filmes[j].ano);
        }
        printf("\n");
      }
    }
    printf("Digite o nome do diretor que deseja procurar: ");
    scanf("%s", nome);
  }
  return 0;
}
