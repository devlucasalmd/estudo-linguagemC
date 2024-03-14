#include <stdio.h>

int main(void)
{
    int a, b, c, d, adicao1, adicao2, adicao3, adicao4, adicao5, adicao6;
    int multi1, multi2, multi3, multi4, multi5, multi6;
    
    printf("A: \n");
    scanf("%d", &a);
    
    printf("B: \n");
    scanf("%d", &b);
    
    printf("C: \n");        
    scanf("%d", &c);
    
    printf("D: \n");
    scanf("%d", &d);

    adicao1 = a + b;
    adicao2 = a + c;
    adicao3 = a + d;
    adicao4 = b + c;
    adicao5 = b + d;
    adicao6 = c + d;

    multi1 = a * b;
    multi2 = a * c;
    multi3 = a * d;
    multi4 = b * c;
    multi5 = b * d;
    multi6 = c * d;    
 
    printf("Adicao %d + %d = %d\n", adicao1);
    printf("Adicao %d + %d = %d\n", adicao2);
    printf("Adicao %d + %d = %d\n", adicao3);
    printf("Adicao %d + %d = %d\n", adicao4);
    printf("Adicao %d + %d = %d\n", adicao5);
    printf("Adicao %d + %d = %d\n", adicao6);

    printf("Multiplicacao %d * %d = %d\n", multi1);
    printf("Multiplicacao %d * %d = %d\n", multi2);
    printf("Multiplicacao %d * %d = %d\n", multi3);
    printf("Multiplicacao %d * %d = %d\n", multi4);
    printf("Multiplicacao %d * %d = %d\n", multi5);
    printf("Multiplicacao %d * %d= %d\n", multi6);
    return 0;
}