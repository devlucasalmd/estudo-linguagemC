#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float altura;
    float raio;
    float res;
    float alt;
    float volume;
    
    printf("Digite a altura da lata: \n");
    scanf("%f", &altura);
    printf("Digite o raio da lata: \n");
    scanf("%f", raio);    
    res = 3.14159 * raio;
    alt = 2 * altura;
    volume = pow(res, alt); 
    printf("%.2f", volume);
    return 0;
}