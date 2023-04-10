#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum numer of coins
 * to make change for an amount of money
 * @argc: numbre of passed arguments
 * @argv: passed arguments
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	unsigned int i, num_of_coins;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	else
	{
		cents = atoi(argv[1]);
		num_of_coins = 0;
		i = 0;
		while (i < 5)
		{
			if (cents >= coins[i])
			{
				num_of_coins += cents / coins[i];
				cents -= (cents / coins[i]) * coins[i];
				if (cents == 0)
					break;
			}
			i++;
		}
		printf("%d\n", num_of_coins);
	}
	return (0);
}
