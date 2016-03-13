/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);

		int a[n][n];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				scanf("%d", &a[i][j]);
			}
		}

		for (int i = n - 2; i >= 0; --i)
		{
			for (int j = 0; j <= i; ++j)
			{
				int x = a[i + 1][j],
					y = a[i + 1][j + 1];
				a[i][j] += (x > y ? x : y);
			}
		}

		printf("%d\n", a[0][0]);
	}

	return 0;
}
