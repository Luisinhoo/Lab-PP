/*
  Atividade 4: Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
               perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
               outro número inteiro. Ex.: 1, 4, 9...
  POR LUÍS H.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num1;
    int quadradoP;
    int num2;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);

    printf("Agora digite outro numero: ");
    scanf("%d", &num2);


    verifica(num1, num2);

    printf("%d eh quadrado perdeito de %d\n", num1, num2);
}

void verifica(int num1, int num2, int quadradoP)
{

    num1 = sqrt(quadradoP);
    num2 = sqrt(quadradoP);

    if (num1 == num2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
