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

	getchar();

	while (t--)
	{
		char str[315];
		gets(str);

		int a[26];
		for (int i = 0; i < 26; ++i)
		{
			a[i] = 0;
		}

		int n = strlen(str);
		for (int i = 0; i < n; ++i)
		{
			int j = -1;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = str[i] - 'a';
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = str[i] - 'A';
			}

			if (j >= 0 && j <= 25)
			{
				++a[j];
			}
		}

		int j = 0;
		for (int i = 0; i < 26; ++i)
		{
			if (a[i] == 0)
			{
				printf("%c", 'a' + i);
				++j;
			}
		}
		if (j == 0)
		{
			printf("~");
		}
		printf("\n");
	}

	return 0;
}
