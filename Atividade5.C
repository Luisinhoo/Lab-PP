/*
   Atividade 5: Leia um numero real e imprima a quinta parte deste numero.
   POR LUÍS H.
*/

#include <stdio.h>

int main()
{
  float num; //numero real
  float QP; //quinta parte

  printf("Digite um numero real: ");
  scanf("%f", &num);

  QP = num * 1/5;

  printf("A quinta parte deste numero eh: %.2f", QP);
  return 0;
}
