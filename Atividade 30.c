/*
   Atividade 30: Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
                 dólares.
   POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    float R; //valor em real
    float D; //cotação do dólar
    float VD; //valor em dólares

    printf("Digite o valor em REAIS que deseja: ");
    scanf("%f", &R);

    printf("Agora digite a cotaçao do dolar: ");
    scanf("%f", &D);

    VD =  R * D;

    printf("R$%.2f EM $ EH: %.2f\n", R, VD);
    return 0;

}
