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

		int fact[200], last = 0;
		fact[0] = 1;
		for (int i = 1; i <= n; ++i)
		{
			int temp = 0;
			for (int j = 0; j <= last; ++j)
			{
				temp += fact[j] * i;
				fact[j] = temp % 10;
				temp /= 10;
			}

			while (temp)
			{
				fact[++last] = temp % 10;
				temp /= 10;
			}
		}

		for (int i = last; i >= 0; --i)
		{
			printf("%d", fact[i]);
		}
	}

	return 0;
}
