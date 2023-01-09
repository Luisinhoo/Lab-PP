/*
   Atividade 9: Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
                maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
                “Empréstimo concedido”
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal; //salário
    float emp; //prestação de um empréstimo

    printf("Digite o salario do trabalhador: ");
    scanf("%f", &sal);

    printf("Agora digite o valor da prestação de seu emorestimo: ");
    scanf("%f", &emp);

    if(emp > (sal / 0.20))
    {
        printf("EMPRESTIMO NAO CONCEDIDO\n", emp);
    }
    else
    {
        printf("EMPRESTIMO CONCEDIDO\n", emp);
    }
    return 0;

}
