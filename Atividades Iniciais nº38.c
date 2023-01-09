/*
   Atividade 38: Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
                 recebeu um aumento de 25%.
   POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float sal; //salário
    float nvsal; //novo salário
    float aum = 0.25; //aumento

    printf("Digite o SALARIO: ");
    scanf("%f", &sal);

    nvsal = (sal * aum) + sal;

    printf("O NOVO SALARIO eh: %.2f\n", nvsal);
    return 0;
}
