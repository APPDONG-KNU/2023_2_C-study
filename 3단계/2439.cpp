#include <stdio.h>
int main() {
	int n, k;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (k = 0; k < n-(1 + i); k++)
		{
			printf(" ");
		}
		for (k = 0; k < 1 + i; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}