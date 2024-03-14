#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi = 3.14159265;

int main(void)
{
    float a;
    float r;

    printf("Digite o Raio: \n");
    scanf("%f", &r);
    a = pi * pow(r,2);
    printf("area = %.2f\n", a);
    return 0;
}