#include <stdio.h>

int main()
{
	int A, B;
	double C;

	scanf("%d", &A);
	scanf("%d", &B);

	C = (double)A / B;

	printf("%.9lf", C);

	return 0;
}