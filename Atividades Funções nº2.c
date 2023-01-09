/*
  Atividade 2: Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no
              formato textual por extenso. Ex.: Data: 18/11/2022, Imprimir: 18 de novembro de 2022.
  POR LUÍS H.
*/
#include <stdio.h>

void dataAtual(int dia, int mes, int ano);

int main()
{
	int dia, mes, ano;

	printf("Dia: ");
	scanf("%d", &dia);

	while(getchar() != '\n'); //limpa o buffer de entrada.

	printf("Mês: ");
	scanf("%d", &mes);

	while(getchar() != '\n'); //limpa o buffer de entrada.

	printf("Ano: ");
	scanf("%d", &ano);

	dataAtual(dia, mes, ano);

	return 0;
}

void dataAtual(int dia, int mes, int ano)
{
	char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril","Maio", "Junho", "Julho", "Agosto",
	                 "Setembro", "Outubro", "Novembro", "Dezembro"};

	printf("A data eh: %d de %s de %d\n", dia, meses[mes - 1], ano);
}
