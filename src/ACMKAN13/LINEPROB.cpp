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
		int x1, y1, x2, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		int dx = x2 - x1, dy = y2 - y1;
		for (int x = x1; x <= x2; ++x)
		{
			int y = y1 + dy * (x  - x1) / dx;

		}
	}

	return 0;
}
