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

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n, x;
		scanf("%d %d", &n, &x);

		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			int tmp;
			scanf("%d", &tmp);

			if (tmp < x)
			{
				sum = -1;
				cin.ignore(MAX, '\n');
				break;
			}

			sum += tmp;
		}

		printf("%d\n", sum == -1 ? -1 : (sum / x));
	}

	return 0;
}
