/*
  Atividade 2: Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
               do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
  POR LUÍS H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num; //número fornecido pel* usuari*

    printf("Digite um número qualquer: ");
    scanf("%f", &num);

    if(num > 0)
    {
        num = sqrt(num);
        printf("Raiz quadrada eh: %.f\n", num);
    }
    else
    {
        printf("ESTE NUMERO EH INVALIDO\n", num);
    }

    return 0;
}
