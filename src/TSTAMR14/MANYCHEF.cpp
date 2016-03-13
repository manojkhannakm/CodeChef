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
		char str[2014];
		scanf("%s", str);

		for (int i = strlen(str); i >= 0; i--)
		{
			if ((str[i] == 'F' || str[i] == '?')
					&& (str[i - 1] == 'E' || str[i - 1] == '?')
					&& (str[i - 2] == 'H' || str[i - 2] == '?')
					&& (str[i - 3] == 'C' || str[i - 3] == '?'))
			{
				str[i] = 'F';
				str[i - 1] = 'E';
				str[i - 2] = 'H';
				str[i - 3] = 'C';

				i -= 3;
			}
			else if (str[i] == '?')
			{
				str[i] = 'A';
			}
		}

		printf("%s\n", str);
	}

	return 0;
}
