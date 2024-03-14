#include <stdio.h>

int main(void)
{
    float c; 
    float f;
    printf("Digite a temperatura em graus Celsius\n");
    scanf("%f", &c);
    f = c*9/5+32;
    printf("A temperatura %.2f em Celsius, eh de %.2f em Fahrenheit\n", c, f);

    return 0;
}