#include <stdio.h>

/* Prorotype of muliple_sum function */
void fibonacci(int n);

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int a;

	a = 50;
	fibonacci(a);
	printf("\n");
	return (0);
}

/**
 * fibonacci - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line.
 *
 * @n: the limit number
 * Return: void.
 */
void fibonacci(int n)
{
	long i, j, k, counter;

	i = 1;
	j = 0;
	k = 0;
	counter = 1;
	while (counter < n)
	{
		printf("%ld", k);
		if (k == 1)
			printf(", 1");
		k = i + j;
		j = i;
		i = k;
		if (counter < (n - 1))
			printf(", ");
		counter++;
	}
}
