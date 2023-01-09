/*
   Atividade 2: Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
                os dados em uma estrutura.
                
                POR LUÍS H.                
*/
#include <stdio.h>

struct dados
{
    char nome[40];
    char endereco[40];
    int idade;
};
typedef struct dados DadosP; //DadosP = dados de uma pessoa.

int main()
{
    DadosP pessoa;
    
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    
    printf("Digite o seu nome: ");
    scanf("%s", pessoa.nome);
    
    printf("Digite o seu endereco: ");
    scanf("%s", pessoa.endereco);
    
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n", pessoa.nome, pessoa.idade, pessoa.endereco);
    
    return 0;
}
