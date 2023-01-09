/*
   Atividade 6:  Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
                 como a diferença existente entre ambos.
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1; //primeiro número
    int num2; //segundo número
    int dif; //diferença

    printf("Digite um numero inteiro qualquer: ");
    scanf("%d", &num1);

    printf("Agora digite outro numero inteiro qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        dif = num1 - num2;
        printf("%d eh MAIOR que %d\n", num1, num2);
        printf("A DIFERENÇA entre eles eh de %d\n", dif);
    }
    else
    {
        dif = num2 - num1;
        printf("%d eh MAIOR que %d\n", num2, num1);
        printf("A DIFERENÇA entre eles eh de %d\n", dif);
    }
    return 0;
}
