/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		char str[100];
		scanf("%s", &str);

		int holes = 0;
		for (int j = 0; j < 100; ++j)
		{
			char c = str[j];
			if (c == '\0')
			{
				break;
			}

			switch (c)
			{

				case 'A':

				case 'D':

				case 'O':

				case 'P':

				case 'Q':

				case 'R':
					++holes;
					break;

				case 'B':
					holes += 2;
					break;

			}
		}

		printf("%d\n", holes);
	}

	return 0;
}
