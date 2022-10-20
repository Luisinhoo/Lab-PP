/*
   Atividade 10: Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
                 (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
                 em m/s.
                 POR LUÍS H.
*/

#include <stdio.h> 
 
int main() 
{
    float K; //quilômetros por hora
    float M; //metros por segundo
    
    printf("Digite uma velocidade em KM/H: ");
    scanf("%f", &K);
    
    M = K/3.6;
    
    printf("A velocidade em m/s eh: %.2f\n", M);
    
    return 0;
}
