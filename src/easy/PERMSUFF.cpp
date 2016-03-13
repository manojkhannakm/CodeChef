/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);

		int p[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &p[i]);
		}

		pair<int, int> lr[m];
		int tm = 0;
		for (int i = 0; i < m; ++i)
		{
			int l, r;
			scanf("%d %d", &l, &r);

			if (l != r)
			{
				lr[tm++] = make_pair(l, r);
			}
		}
		sort(lr, lr + tm);

		int l = lr[0].first,
			r = lr[0].second;
		for (int i = 1; i < tm; ++i)
		{
			int f = lr[i].first,
				s = lr[i].second;
			if (r >= f)
			{
				r = max(r, s);
			}
			else
			{
				sort(p + l - 1, p + r);

				l = f;
				r = s;
			}
		}
		sort(p + l - 1, p + r);

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if (p[i] != i + 1)
			{
				flag = false;
			}
		}
		printf("%s\n", flag ? "Possible" : "Impossible");
	}

	return 0;
}
