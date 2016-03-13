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

char str[100010];

int main()
{
	int t;
	scanf("%d\n", &t);

	while (t--)
	{
		scanf("%s", str);

		int a[26];
		for (int i = 0; i < 26; ++i)
		{
			a[i] = 0;
		}

		int i = 0;
		while (str[i] != '\0')
		{
			++a[str[i] - 'a'];
			++i;
		}

		int ans = 0;
		for (int i = 0; i < 26; ++i)
		{
			if (a[i] > 0)
			{
				++ans;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
