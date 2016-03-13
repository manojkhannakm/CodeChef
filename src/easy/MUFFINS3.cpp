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

		int size = 0, extra = 0;
		for (int i = n / 2; i <= n; ++i)
		{
			int temp = n % i;
			if (temp >= extra)
			{
				size = i;
				extra = temp;
			}
		}

		printf("%d\n", size);
	}

	return 0;
}
