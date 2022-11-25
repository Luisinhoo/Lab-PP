/*
    Atividade 16: Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
                  sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos
                  sinais de igual serão mostrados.
    POR LUÍS H.
*/
#include <stdio.h>

int desenhaLinha(char simbolo);

int main()
{
    char simbolo = '=';
    int resultado, quantidade;

    printf("Digite a quantidade de simbolos: ");
    scanf("%d",&quantidade);

    resultado = desenhaLinha(simbolo);
    return 0;
}

int desenhaLinha(char simbolo)
{
    int quantidade, i;

    for(i = 1;i < quantidade; i++)
    {
        simbolo++;
    }

    printf("%c\n", simbolo);
    return simbolo;
}
