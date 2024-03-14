#include <stdio.h>

int main(void)
{
    int valor, tempo, taxa;
    float prestacao;
    
    printf("Valor: \n");
    scanf("%d", &valor);
    scanf("%d", &tempo);
    scanf("%d", &taxa);
    
    printf("Valor: %d\n", valor);
    printf("Tempo: %d\n", tempo);
    printf("Taxa: %d\n", taxa);

    prestacao = valor + (valor * (taxa / 100) * tempo);
    
    printf("Valor: %d\n", valor);
    printf("Tempo: %d\n", tempo);
    printf("Taxa: %d\n", taxa);
    printf("Prestacao = %.2f\n", prestacao);
    return 0;
}