#include <stdio.h>

int main()
{
	int a, b, i, s;

	scanf("%d", &s);

	for (i = 0; i < s; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}