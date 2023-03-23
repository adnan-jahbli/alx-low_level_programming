#include <stdio.h>

/* Prorotype of muliple_sum function */
void fibonacci(unsigned int n);

/**
 * main - prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0 (Success).
 */
int main(void)
{
	unsigned int a;

	a = 98;
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
void fibonacci(unsigned int n)
{
	unsigned long i, j, k, counter;

	i = 1;
	j = 0;
	k = 1;
	counter = 1;
	while (counter <= n)
	{
		k = i + j;
		j = i;
		i = k;
		printf("%ld", k);
		if (counter < n)
			printf(", ");
		counter++;
	}
}
