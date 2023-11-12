#include <stdio.h>

int main()
{
	int i, n;

	scanf("%d", &n);

	n = n / 4;

	for (i = 0; i < n; i++)
	{
		printf("long ");
	}

	printf("int");

	return 0;
}