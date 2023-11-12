#include <stdio.h>

int main()
{
	int h, m;

	scanf("%d %d", &h, &m);

	m = m - 45;

	if (m < 0)
	{
		m = 60 + m;
		h = h - 1;

		if (h < 0)
			h = 23;
	}

	printf("%d %d", h, m);

	return 0;
}