#include <stdio.h>

int main(void)
{
    float c; 
    float f;
    printf("Digite a temperatura em graus Fahrenheit\n");
    scanf("%f", &f);
    c = ((f - 32) * 5) / 9;
    printf("A temperatura %.2f em Fahrenheit, eh de %.2f em Celsius\n", f, c );

    return 0;
}