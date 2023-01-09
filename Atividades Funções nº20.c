/*
  Atividade 20: Escreva uma função para determinar a quantidade de números primos abaixo de N.
  POR LUÍS H.
*/
#include <stdio.h>

int contadorPrimos(int n);

int main()
{
    int n, resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    resultado = contadorPrimos(n);

    return 0;
}

int contadorPrimos(int n)
{
    int i, j, contador = 0;

    for (i = 2; i < n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {

            }

        }

        if (j == i)
            contador++;
    }

    return contador;
}
