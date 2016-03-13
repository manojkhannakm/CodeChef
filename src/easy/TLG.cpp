/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	int p1 = 0, p2 = 0, w = 0, l = 0;
	while (t--)
	{
		int cp1;
		scanf("%d", &cp1);
		p1 += cp1;

		int cp2;
		scanf("%d", &cp2);
		p2 += cp2;

		int cl = p1 - p2;
		if (cl > 0)
		{
			if (cl > l)
			{
				w = 1;
				l = cl;
			}
		}
		else
		{
			cl *= -1;

			if (cl > l)
			{
				w = 2;
				l = cl;
			}
		}
	}

	printf("%d %d", w, l);

	return 0;
}
