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
	int t = 0, n;
	while (scanf("%d", &n), n > 0)
	{
		int arr[n], sum = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &arr[i]);
			sum += arr[i];
		}

		int avg = sum / n, res = 0;
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] > avg)
			{
				res += arr[i] - avg;
			}
		}

		printf("Set #%d\n", ++t);
		printf("The minimum number of moves is %d.\n\n", res);
	}

	return 0;
}
