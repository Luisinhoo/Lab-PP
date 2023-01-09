/*
   Atividade 3: Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
                o número ao quadrado.
   POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num; //número real

    printf("Digite um numero real qualquer: ");
    scanf("%f", &num);

    if(num > 0)
    {
       num = sqrt(num);
        printf("Raiz quadrada eh: %.2f\n", num);
    }
    else
    {
        num = num * num;
        printf("Esse numero ao quadrado eh: %.2f");
    }
    return 0;
}
