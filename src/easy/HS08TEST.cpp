/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>

using namespace std;

int main()
{
	int debit;
	scanf("%d", &debit);

	float balance;
	scanf("%f", &balance);

	if (debit % 5 == 0 && debit + 0.5 <= balance)
	{
		printf("%.2f", balance - debit - 0.5);
	}
	else
	{
		printf("%.2f", balance);
	}

	return 0;
}
