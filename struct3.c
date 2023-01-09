/*
   Atividade 3: Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a
                informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela.
            
            Por Luís H.

*/
#include <stdio.h>

struct dadosAluno
{
  char nome[40];
  char curso[40];
  int numeroMatricula;
};
typedef struct dadosAluno Aluno;

int main()
{
  Aluno estudante[5];
  int i;
  
  for(i = 0; i < 5; i++)
  {
    printf("Digite o nome do %dº aluno: ", i + 1);
    scanf("%s", estudante[i].nome);
    
    printf("Digite a matrícula do %dº alunos: ", i + 1);
    scanf("%d", &estudante[i].numeroMatricula);
    
    printf("Digite o curso do %dº aluno: ", i + 1);
    scanf("%s", estudante[i].curso);
    printf("\n");
  }
  
  for(i = 0; i < 5; i++)
  {
    printf("Nome: %s\nMatricula: %d\n", estudante[i].nome, estudante[i].numeroMatricula);
    printf("Curso: %s\n", estudante[i].curso);
    printf("\n");
  }

  return 0;
}
