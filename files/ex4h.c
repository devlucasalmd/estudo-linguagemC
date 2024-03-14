#include <stdio.h>

int main(void)
{
    float altura, largura, comprimento, volume;

    printf("Altura: \n");
    scanf("%f", &altura);
    printf("Largura: \n");
    scanf("%f", &largura);
    printf("Comprimento: \n");
    scanf("%f", &comprimento);
    volume = comprimento * largura * altura;
    printf("volume: %.2f\n", volume);

    return 0;
}