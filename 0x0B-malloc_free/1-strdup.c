#include <stdlib.h>

/**
 * _strdup - a function allocate a new space in memory for a given string
 * and copy its values into that new space.
 * @str: the given string
 * Return: NULL if str = NULL
 * and on sucess it returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*(str + i) != '\0')
		i++;

	s = malloc(sizeof(char) * i);

	if (s == NULL)
		return (NULL);

	j = 0;
	while (*(str + j) != '\0')
	{
		*(s + j) = *(str + j);
		j++;
	}

	return (s);
}
