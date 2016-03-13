/*
 * @Author: Manoj Khanna
 */

#include <stdio.h>
#include <math.h>

using namespace std;

bool ispalindrome(int n)
{
	int temp = n, palin = 0;
	while (temp)
	{
		palin *= 10;
		palin += temp % 10;
		temp /= 10;
	}

	return n == palin;
}

bool isprime(int n)
{
	if (n == 1)
	{
		return false;
	}

	for (int i = 2, sqn = sqrt(n); i <= sqn; ++i)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int n;
	scanf("%d", &n);

	int m = n;
	while (!ispalindrome(m) || !isprime(m))
	{
		++m;
	}

	printf("%d\n", m);

	return 0;
}
