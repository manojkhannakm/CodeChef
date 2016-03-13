/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);

		if (n < 5)
		{
			printf("%d\n", 0);
			continue;
		}

		int k = 0;
		while (pow(5, k + 1) <= n)
		{
			++k;
		}

		int zeros = 0;
		for (int j = 0; j < k; ++j)
		{
			zeros += floor(n / pow(5, j));
		}
		printf("%d\n", zeros);
	}

	return 0;
}
