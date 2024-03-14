#include <stdio.h>

int main(void)
{
    int HT;
    float VH, PD, TD, SB, SL;

    printf("Digite o valor de HT:\n");
    scanf("%d", &HT);
    printf("Digite o valor de VH:\n");
    scanf("%f", &VH);
    printf("Digite o valor de PD:\n");
    scanf("%f", &PD);
    
    SB = HT * VH;
    TD = (PD/100) * SB;
    SL = SB - TD;
    printf("Valor de SB = %.2f\n", SB);
    printf("Valor de SL = %.2f\n", SL);
    return 0;
}