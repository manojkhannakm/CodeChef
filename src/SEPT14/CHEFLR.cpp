/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		char str[100000];
		scanf("%s", str);

		int ans = 1, mod = 1000000007;
		for (int i = 0, n = strlen(str); i < n; ++i)
		{
			char c = str[i];
			if (c == 'l')
			{
				if ((i + 2) % 2 == 0)
				{
					ans = (ans * 2) % mod;
				}
				else
				{
					ans = (ans * 2 - 1) % mod;
				}
			}
			else if (c == 'r')
			{
				if ((i + 2) % 2 == 0)
				{
					ans = (ans * 2 + 2) % mod;
				}
				else
				{
					ans = (ans * 2 + 1) % mod;
				}
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}
