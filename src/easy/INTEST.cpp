/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);

	int k;
	scanf("%d", &k);

	int count = 0;
	while (n--)
	{
		int t;
		scanf("%d", &t);

		if (t % k == 0)
		{
			++count;
		}
	}
	printf("%d", count);

	return 0;
}
