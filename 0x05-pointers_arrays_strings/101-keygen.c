#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - a function that generates random valid passwords.
 * Return: 0 Always.
 */
int main(void)
{
	int ran, i;
	time_t t;

	ran = 0;
	i = 0;
	srand((unsigned int) time(&t));
	while (i < 2772)
	{
		ran = rand() % 128;
		if ((i + ran) > 2772)
			break;
		i += ran;
		printf("%c", ran);
	}
	printf("%c\n", (2772 - i));

	return (0);
}
