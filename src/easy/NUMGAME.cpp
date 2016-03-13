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
		long long int n;
		scanf("%lld", &n);

		if (n % 2 == 0)
		{
			printf("ALICE\n");
		}
		else
		{
			printf("BOB\n");
		}
	}

	return 0;
}
