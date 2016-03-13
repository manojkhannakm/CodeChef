/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}

		sort(a, a + n);

		int b[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &b[i]);
		}

		sort(b, b + n);

		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (a[count] <= b[i])
			{
				++count;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}
