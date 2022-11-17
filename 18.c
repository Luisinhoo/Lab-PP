/*
  Atividade 18: Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
                recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
                ano anterior. Faça programa que determine o salário atual do funcionário.
  POR LUÍS H.
*/
#include <stdio.h>
#define AnoA 2022

int main()
{
    float salario;
    int salarioI;
    int ano;
    float aumento = 1.5;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioI);

    while(ano < AnoA)
    {
       ano += 1;
       salario += 1 + aumento;
       aumento *= 2;
    }
    printf("No ano %d, o funcionario recebeu R$%f.2\n", AnoA, salario);
    return 0;
}
