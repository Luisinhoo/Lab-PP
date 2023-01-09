/*
  Atividade 11:  Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
                 soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
                 + 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
                 “Número inválido”
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num; //número
    int soma = 0; //soma dos algarismos
    int digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num > 0)
    {
        digito = num % 10;
        soma = soma + digito;
        num = num / 10;

        printf("A soma dos algarismos digitados eh: %d\n", soma);
    }
    else
    {
        printf("Numeros invalidos\n", num);
    }

    return 0;
}
