#include <stdio.h>
#include <math.h>

int main(void)
{
		int a, b, x, res;

		printf("Valor de A: \n");
		scanf("%d", &a);
		printf("Valor de B: \n");
		scanf("%d", &b);

		x = a - b;
		res = pow(x, 2);
		printf("%d\n", res);
}				



