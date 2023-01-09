/*
   Atividade 19: Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
                 fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
                 cúbicos.
                 POR LUÍS H.
*/

#include <stdio.h>

int main()
{
    float L; //litros

    int M; //metros cúbicos

    printf("Digite uma quantidade de LITROS: ");
    scanf("%f", &L);

    M = L  / 1000;

    printf("Isso em METROS CUBICOS eh: %d\n", M);

    return 0;
}
