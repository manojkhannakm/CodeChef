/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	int r = 0;
	for (int i = 0; i < m; ++i)
	{
		getchar();

		char c = getchar();

		int d;
		scanf("%d", &d);

		switch (c)
		{

			case 'C':
				r += d;
				break;

			case 'A':
				r -= d;
				break;

			case 'R':
				r %= n;

				int j;
				if (r > 0)
				{
					if (d <= n - r)
					{
						j = r + d - 1;
					}
					else
					{
						j = d - 1 - (n - r);
					}
				}
				else if (r < 0)
				{
					r *= -1;

					if (d <= r)
					{
						j = n - r + d - 1;
					}
					else
					{
						j = d - 1 - r;
					}

					r *= -1;
				}
				else
				{
					j = d - 1;
				}

				printf("%d\n", a[j]);
				break;

		}
	}

	return 0;
}
