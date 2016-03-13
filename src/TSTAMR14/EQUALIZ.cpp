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

const int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);

		int a[n], avg = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);

			avg += a[i];
		}

		avg /= n;

		int i;
		for (i = 9; i >= 0; i--)
		{
			if (n % p[i] == 0)
			{
				break;
			}
		}

		while (true)
		{
			int b[p[i]], j = 0;
			b[0] = 0;
			for (int i = 0; i < n; ++i)
			{
				if (a[i] != avg && a[i] != b[0])
				{
					b[j++] = a[i];
					if (j == p[i])
					{
						break;
					}
				}
			}
		}
	}

	return 0;
}
