#include <stdio.h>

/**
 * fizz_buzz - prints Fizz-Buzz game from 1 to 100.
 * @n: limit number of fizz buzz
 *
 * Return: void
 */
void fizz_buzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		/* avoiding priting a space after the last printed value.*/
		if (i != n)
			printf(" ");
		else
			continue;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 100;
	fizz_buzz(n);
	return (0);
}
