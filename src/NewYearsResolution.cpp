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

bool compute(int *arr, int n, int target, int *com, int o)
{
	int sum = 0;
	for (int i = 0; i < o; ++i)
	{
		sum += com[i];
	}

	if (sum == target)
	{
		return true;
	}
	else if (sum > target)
	{
		return false;
	}

	for (int i = 0; i < n; ++i)
	{
		int x = n - i - 1, new_arr[x];
		for (int j = 0; j < x; ++j)
		{
			new_arr[j] = arr[i + 1 + j];
		}

		int y = o + 1, new_com[y];
		for (int j = 0; j < o; ++j)
		{
			new_com[j] = com[j];
		}
		new_com[y - 1] = arr[i];

		if (compute(new_arr, x, target, new_com, y))
		{
			return true;
		}
	}

	return false;
}

int main()
{
	int t;
	scanf("%d\n", &t);

	for (int i = 1; i <= t; ++i)
	{
		int gp, gc, gf;
		scanf("%d %d %d\n", &gp, &gc, &gf);

		int n;
		scanf("%d\n", &n);

		int p[n], c[n], f[n];
		for (int j = 0; j < n; ++j)
		{
			scanf("%d %d %d\n", &p[j], &c[j], &f[j]);
		}

		int com[0];
		if (compute(p, n, gp, com, 0)
				&& compute(c, n, gc, com, 0)
				&& compute(f, n, gf, com, 0))
		{
			printf("Case #%d: yes\n", i);
		}
		else
		{
			printf("Case #%d: no\n", i);
		}
	}

	return 0;
}
