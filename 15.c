/*
 Atividade 15:Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
              escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
              de dados com um valor negativo ou zero.
 POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()

{

   float num;
   float quadrado;
   float cubo;
   float raiz;
   float cond=1;

   while(cond >= 0)
    {

       printf("Digite o número: ");
       scanf("%f", &num);

       quadrado = num * num;

       cubo = num * num * num;

       raiz = sqrt(num);

       if(num >= 0)
        {
           printf("Quadrado: %.1f\n", quadrado);

           printf("Cubo: %.1f\n", cubo);

           printf("Raiz: %.1f\n", raiz);
        }

       else
       {
           cond = -1;
       }
   }
   return 0;
}
