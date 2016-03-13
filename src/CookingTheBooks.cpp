/*
 * @Author: Manoj Khanna
 */

#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int to_n(int *arr, int len)
{
	int n = 0;
	for (int i = 0; i < len; ++i)
	{
		n = n * 10 + arr[i];
	}

	return n;
}

int main()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; ++i)
	{
		int n;
		scanf("%d", &n);

		int min, max;
		if (n <= 10)
		{
			min = max = n;
		}
		else
		{
			int len = log10(n) + 1,
				arr[len];
			for (int j = len - 1; j >= 0; j--)
			{
				arr[j] = n % 10;
				n /= 10;
			}

			int dx = 9, dy = 1,
				x, y;
			for (int j = 0; j < len; ++j)
			{
				int d = arr[j];
				if (d > 0 && d <= dx)
				{
					dx = d;
					x = j;
				}

				if (d >= dy)
				{
					dy = d;
					y = j;
				}
			}

			swap(arr[0], arr[x]);
			min = to_n(arr, len);
			swap(arr[x], arr[0]);

			swap(arr[0], arr[y]);
			max = to_n(arr, len);
		}

		printf("Case #%d: %d %d\n", i + 1, min, max);
	}

	return 0;
}
