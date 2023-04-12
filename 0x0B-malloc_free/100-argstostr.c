#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of a program.
 * @ac: number of given arguments
 * @av: an array of arguments
 * Return: a pointer to a new string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, num;
	char *s;

	num = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		num += j;
		i++;
	}

	s = malloc(sizeof(char) * (num + ac));
	if (s == NULL)
		return (NULL);

	j = 0;
	k = 0;
	for (i = 0; i < num + ac; i++)
	{
		if (av[j][k] == '\0')
		{
			j++;
			k = 0;
			*(s + i) = '\n';
		}
		else
		{
			*(s + i) = av[j][k];
			k++;
		}
	}

	return (s);
}
