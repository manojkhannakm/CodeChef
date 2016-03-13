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

	int n[t];
	for (int i = 0; i < t; ++i)
	{
		scanf("%d", &n[i]);
	}

	sort(n, n + t);

	for (int i = 0; i < t; ++i)
	{
		printf("%d\n", n[i]);
	}

	return 0;
}
