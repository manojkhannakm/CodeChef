/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>

using namespace std;

#define MAX 999999999

int a[99999999];
const int MOD = 1000000007;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int m;
		scanf("%d", &m);

		int n = 0;
		for (int i = 0; i < m; ++i)
		{
			int l, d;
			scanf("%d %d", &l, &d);

			for (int i = 0; i < l; ++i)
			{
				a[n++] = d;
			}
		}

		unsigned long long int ans = 0;
		int o = 0;
		while (a[o] != 0)
		{
			for (int i = o; i < n; ++i)
			{
				ans = (ans + a[i]) % MOD;
			}

			for (int i = n - 1; i >= o; i--)
			{
				if (a[i] == 0)
				{
					a[i] = 9;
				}
				else
				{
					--a[i];

					if (i == o && a[i] == 0)
					{
						++o;
					}

					break;
				}
			}
		}

		printf("%llu\n", ans);
	}

	return 0;
}
