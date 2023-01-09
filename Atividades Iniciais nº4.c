/*
   Atividade 4: Leia um número real e imprima o resultado do quadrado desse número.
   POR LU0ˆ1S H.
*/

#include <stdio.h>

int main()
{
    float num; //numero real
    float re; //resultado

    printf("Digite um numero real: ");
    scanf("%f", &num);

    re = num * num;

    printf("Resultado: %.2f", re);
    return 0;
}
