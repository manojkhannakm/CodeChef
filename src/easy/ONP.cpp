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
		char eqn[400];
		scanf("%s", &eqn);

		char stack[400];
		int last = -1;
		for (int i = 0; i < 400; ++i)
		{
			char c = eqn[i];
			if (c == '\0')
			{
				break;
			}

			switch (c)
			{

				case '(':

				case '+':

				case '-':

				case '*':

				case '/':

				case '^':
					stack[++last] = c;
					break;

				case ')':
					while (stack[last] != '(')
					{
						printf("%c", stack[last--]);
					}
					--last;
					break;

				default:
					printf("%c", c);

					if (last >= 0 && stack[last] != '(')
					{
						printf("%c", stack[last--]);
					}
					break;

			}
		}

		printf("\n");
	}

	return 0;
}
