/*
  Atividade 20: Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int i;
    int j;
    int somaPrimos;
    int quantDiv;


    for(i = 3; i <= 2000000; i++)
        {
          quantDiv = 0;
          for(j = 1; j <= i; j++)
            {
               if (i % j == 0)
               {
                  quantDiv++;
               }

              if (quantDiv > 2)
               {
                  break;
               }
            }

          if (quantDiv == 2)
            {
              somaPrimos += i;
            }
         }

    printf("A soma dos numeros primos abaixo de 2 milhoes eh: %d\n\n", somaPrimos);
    return 0;
}
