#include <stdio.h>

int all_digits(char *s);
int _atoi(char *s);

/**
 * main - a program that adds positive numbers.
 * @argc: number of passed arguments
 * @argv: passed arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum;

	i = 1;
	sum = 0;
	if (argc == 1)
		printf("%d\n", sum); /* here sum is still 0 */
	else
	{
		while (argv[i] != NULL)
		{
			if (all_digits(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += _atoi(argv[i]);
				i++;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * all_digits - a function that checks if a string characters are all digits.
 * @s: the given string.
 * Return: 1 if true 0 if not.
 */
int all_digits(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (!(*(s + i) >= '0' && *(s + i) <= '9'))
		{
			return (1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/**
 * _atoi - a function that transfer a string of numbers to an intger.
 * @s: the given string.
 * Return: an integer.
 */
int _atoi(char *s)
{
	int i, sign, n, factor;
	unsigned int num;

	sign = 1;
	num = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			factor = 1;
			n = i + 1;
			while (*(s + n) >= '0' && *(s + n) <= '9')
			{
				factor *= 10;
				n++;
			}
			num += (*(s + i) - '0') * factor;
			if (!(*(s + i + 1) >= '0' && *(s + i + 1) <= '9'))
				break;
		}
		else
			continue;
	}
	return (num * sign);
}
