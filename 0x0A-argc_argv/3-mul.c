#include <stdio.h>

int _atoi(char *s);

/**
 * main - a program that multiplies two numbers.
 * @argc: number of passed arguments
 * @argv: the passed arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
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
