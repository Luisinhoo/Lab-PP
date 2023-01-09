/*
  Atividade 13: Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
                representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
                ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
                será efetuada uma divisão.
  POR LUÍS H.
*/
#include <stdio.h>

float operacao(float num1, float num2);

int main()
{
    float num1, num2, resultado;
    char op;

    printf("Operadores: \n");
    printf("+ -> Adicao\n");
    printf("- -> Subtracao\n");
    printf("* -> Multiplicacao\n");
    printf("/ -> Divisao\n");

    printf("Digite um simbolo: ");
    scanf("%c", &op);

    printf("Digite um numero qualquer: ");
    scanf("%f", &num1);

    printf("Agora digite outro numero qualquer: ");
    scanf("%f", &num2);

    resultado = operacao(num1, num2);

    printf("Resultado = %.1f\n",resultado);
    return 0;
}

float operacao(float num1, float num2)
{
    char op;
    float resultado;
    switch(op)
    {
          case 1:
                  op = '+';
                  resultado = num1 + num2;
                  break;

          case 2:
                  op = '-';
                  resultado = num1 - num2;
                  break;

          case 3:
                  op = '*';
                  resultado = num1 * num2;
                  break;

          case 4:
                  op = '/';
                  resultado = num1 / num2;
                  break;
    }
    return resultado;
}
