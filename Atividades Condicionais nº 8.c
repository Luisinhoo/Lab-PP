/*
  Atividade 8: Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
               tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
               10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
               programa termina.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nt1; //nota 1
    float nt2; //nota 2

    printf("Digite a primeira nota que deseja verificar: ");
    scanf("%f", &nt1);

    printf("Agora digite a segunda nota que deseja verificar: ");
    scanf("%f", &nt2);


    if((nt1 >= 0) && (nt1 <= 10) && (nt2 >= 0) && (nt2 <= 10))
    {
        (nt1 + nt2) / 2;
        printf("Media: %.1f\n", nt1, nt2);
    }
    else
    {
        printf("NOTAS IVALIDAS\n", nt1, nt2);
    }

    return 0;
}
