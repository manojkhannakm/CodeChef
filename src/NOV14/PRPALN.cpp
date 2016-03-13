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

		int n = strlen(str);
		bool removed = false, result = true;
		for (int i = 0, j = n - 1; i < j; ++i, --j)
		{
			if (str[i] != str[j])
			{
				if (removed)
				{
					result = false;
					break;
				}
				else
				{
					if (str[i] == str[j - 1] && str[j] != str[i + 1])
					{
						--j;
						removed = true;
					}
					else if (str[j] == str[i + 1] && str[i] != str[j - 1])
					{
						if (str[i] != str[j - 1])
						{
							++i;
						}
						else
						{
							--j;
						}
						removed = true;
					}
					else
					{
						result = false;
						break;
					}
				}
			}
		}

		if (result)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}
