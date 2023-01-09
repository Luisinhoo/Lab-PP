/*
  Atividade 10: Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
                ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
                              -> Homens: (72,7 * h) – 58,0
                              -> Mulheres: (62,1 * h) – 44,7
  LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h; //altura
    float pid; //peso ideal

    char sex; //sexo de uma pessoa

    printf("Digite sua altura em CENTIMETROS: ");
    scanf("%f", &h);

    printf("Agora informe seu SEXO: ");
    scanf("%c", &sex);

    if(sex == 'M')
    {
        pid = (72.7 * h) - 58.0;
        printf("Seu peso ideal eh: %.2f\n", pid);
    }
    else
    {
        pid = (62.1 * h) - 44.7;
        printf("Seu peso ideal eh: %.2f\n", pid);
    }
}
