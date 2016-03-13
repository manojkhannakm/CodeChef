/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	while (true)
	{
		int n;
		scanf("%d", &n);

		if (n == 0)
		{
			break;
		}

		int a[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if (a[a[i] - 1] != i + 1)
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			printf("ambiguous\n");
		}
		else
		{
			printf("not ambiguous\n");
		}
	}

	return 0;
}
