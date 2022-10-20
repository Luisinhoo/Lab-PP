/*
   Atividade 4: Leia um n鷐ero real e imprima o resultado do quadrado desse n鷐ero.
   POR LUÍS H.
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
