#include <stdio.h>

int main()
{
	int a, b, c, max;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
		printf("%d", a * 1000 + 10000);
	else if ((a == b && b != c) || (a != b && b == c) || (a == c && b != c))
	{
		if (b != c)
			printf("%d", a * 100 + 1000);
		else
			printf("%d", b * 100 + 1000);
	}
	else
	{
		max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;

		printf("%d", max * 100);
	}

	return 0;
}