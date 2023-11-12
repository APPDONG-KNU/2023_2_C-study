#include <stdio.h>

int main()
{
	int tot, n, i, a, b;

	scanf("%d", &tot);
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		tot = tot - a * b;
	}

	if (tot == 0)
		printf("Yes");
	else
		printf("No");

	return 0;
}