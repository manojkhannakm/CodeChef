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
		double ds, dt, d;
		scanf("%lf %lf %lf", &ds, &dt, &d);

		if (d > ds + dt)
		{
			printf("%lf\n", d - ds - dt);
		}
		else if (ds > d + dt)
		{
			printf("%lf\n", ds - d - dt);
		}
		else if (dt > d + ds)
		{
			printf("%lf\n", dt - d - ds);
		}
		else
		{
			printf("%lf\n", 0.0);
		}
	}

	return 0;
}
