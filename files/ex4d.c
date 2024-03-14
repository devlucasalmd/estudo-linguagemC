#include <stdio.h>

int main(void)
{
    int tempo, velocidade, distancia;
    float litros;

    printf("Digite o tempo da viagem");
    scanf("%d", &tempo);
    printf("Digite a velocidade do carro");
    scanf("%d", &velocidade);
    
    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("VELOCIDADE: %d \n", velocidade);
    printf("TEMPO: %d\n", tempo);
    printf("DISTANCIA: %d\n", distancia);
    printf("LITROS: %f\n", litros);
    return 0;
}