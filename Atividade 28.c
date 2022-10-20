/*
   Atividade 28: Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
                 valores lidos.
   POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int num1; //primeiro número
    int num2; //segundo número
    int num3; //terceiro número
    int re; //resultado

    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);

    printf("Digite outro numero qualquer: ");
    scanf("%d", &num2);

    printf("Digite mais um numero qualquer: ");
    scanf("%d", &num3);

    re = num1 * num1 + num2 * num2 + num3 * num3;

    printf("Resultado: %d\n", re);
    return 0;
}
