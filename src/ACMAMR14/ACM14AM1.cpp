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

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n, p;
		scanf("%d %d", &n, &p);

		int res = 0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			scanf("%d", &tmp);

			if (tmp >= p)
			{
				++res;
			}
		}

		printf("%d\n", res);
	}

	return 0;
}
