/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	while (true)
	{
		int i;
		scanf("%d", &i);

		if (i == 42)
		{
			break;
		}

		printf("%d\n", i);
	}

	return 0;
}
