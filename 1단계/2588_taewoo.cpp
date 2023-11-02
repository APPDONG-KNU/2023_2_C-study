#include <stdio.h>

int main()
{
	int A, B, num1, num2, num3;

	scanf("%d", &A);
	scanf("%d", &B);

	num1 = B / 100;
	num2 = (B - num1 * 100) / 10;
	num3 = (B - num1 * 100 - num2 * 10);

	int result1, result2, result3;

	result1 = A * num3;
	result2 = A * num2;
	result3 = A * num1;

	printf("%d\n", result1);
	printf("%d\n", result2);
	printf("%d\n", result3);
	printf("%d\n", result1 + result2 * 10 + result3 * 100);


	return 0;
}
