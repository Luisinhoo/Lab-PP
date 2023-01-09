/*
  Atividade 4: Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
               conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
               da terceira prova.
                    a)Permita ao usuário entrar com os dados de 5 alunos;
                    b)Encontre o aluno com maior nota da primeira prova;
                    c)Encontre o aluno com maior média geral;
                    d)Encontre o aluno com menor média geral;
                    e)Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
  POR LUÍS H.
*/
#include <stdio.h>

struct dadosAluno
{
  int matriculaAluno;
  int notaP1;
  int notaP2;
  int notaP3;
  char Nome[40];
};
typedef struct dadosAluno Dados;

int main()
{
    Dados estudantes[5];
    int i;
    
    //a)Permita ao usuário entrar com os dados de 5 alunos;
    for(i = 0; i < 5; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        scanf("%s", estudantes[i].Nome[i]);
        
        printf("Digite o numero de matricula do %dº aluno: ", i + 1);
        scanf("%d", &estudantes[i].matriculaAluno);
        
        printf("Agora digite as notas da P1, P2 e P3 do %dº aluno: ", i + 1);
        scanf("%d %d %d", &estudantes[i].notaP1, &estudantes[i].notaP2, &estudantes[i].notaP3);
    }

    return 0;
}
