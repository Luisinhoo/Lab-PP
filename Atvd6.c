/*
  Atividade 6: Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
               minutos e segundos, e os converta em segundos.
  POR LUÍS H.
*/
#include <stdio.h>

int conversorSegundos(int horas, int minutos, int segundos);

int main()
{
    int horas, minutos, segundos;

    printf("Horas: ");
    scanf("%d", &horas);

    printf("Minutos: ");
    scanf("%d", &minutos);

    printf("Segundos: ");
    scanf("%d", &segundos);

	printf("O total de segundos são: %d\n",conversorSegundos(horas, minutos, segundos));
    return 0;
}

int conversorSegundos(int horas, int minutos, int segundos)
{
		int calculo, min, h;

		calculo = (segundos + (minutos * 60) + (horas * 60 * 60));
		return calculo;
}
