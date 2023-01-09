/*
  Atividade 3:  Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela,
                iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
  POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int contagemR; //contagem regressiva

    contagemR = 11;
    while(contagemR > 0)
    {
        contagemR--;
        printf("%d\n", contagemR);
    }
    printf("FIM\n");
    return 0;
}
