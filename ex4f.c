#include <stdio.h>

int main(void)
{
    float a, b, x;

    printf("A:\n");
    scanf("%f", &a);
    printf("B:\n");
    scanf("%f", &b);
    x = b;
    b = a;
    a = x;
    
    printf("A: %.1f\n", a);
    printf("B:%.1f \n", b);
    return 0;
}