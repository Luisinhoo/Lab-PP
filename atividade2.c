/*
   Fa鏰 um programa que leia um n鷐ero real e o imprima.
   POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    float num; //numero real

    printf("Digite um numero real: ");
    scanf("%f", &num);

    printf("Numero: %.2f\n", num);

    return 0;
}
