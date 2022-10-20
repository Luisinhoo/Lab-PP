/*
   Pe鏰 ao usu醨io para digitar tr阺 valores inteiros e imprimia a soma deles.
   POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    int val1; //valor 1
    int val2; //valor 2
    int val3; //valor 3
    int soma;

    printf("Digite um valor inteiro: ");
    scanf("%d", &val1);
    printf("Digite mais um valor inteiro: ");
    scanf("%d", &val2);
    printf("Agora digite mais um valor inteiro: ");
    scanf("%d", &val3);

    soma = val1+ val2 + val3;

    printf("Soma: %d\n", soma);

    return 0;
}
