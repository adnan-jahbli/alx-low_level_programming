#include <stdio.h>

/* Prorotype of muliple_sum function */
int multiples_sum(int n);

/**
 * main - prints the return value of multiple_sum function
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int a;

	a = 1024;
	printf("%d\n", multiples_sum(a));
	return (0);
}

/**
 * multiples_sum - computes and prints the sum of all the multiples
 * of 3 or 5 below n (excluded), followed by a new line.
 *
 * @n: the exluded number
 * Return: the result.
 */
int multiples_sum(int n)
{
	int i, sum;

	sum = 0;
	for (i = 3; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		else
			continue;
	}
	return (sum);
}

