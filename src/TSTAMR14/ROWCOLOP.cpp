/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
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

int r[314159], c[314159];

int main()
{
	int n, q;
	scanf("%d %d", &n, &q);

	for (int i = 0; i < n; ++i)
	{
		r[i] = c[i] = 0;
	}

	int ri = 0, ci = 0;
	for (int i = 0; i < q; ++i)
	{
		char str[100];
		int p, x;
		scanf("%s %d %d", str, &p, &x);

		if (str[0] == 'R')
		{
			r[p - 1] += x;

			if (r[p - 1] > ri)
			{
				ri = r[p - 1];
			}
		}
		else
		{
			c[p - 1] += x;

			if (c[p - 1] > ci)
			{
				ci = c[p - 1];
			}
		}
	}

	printf("%d\n", ri + ci);

	return 0;
}
