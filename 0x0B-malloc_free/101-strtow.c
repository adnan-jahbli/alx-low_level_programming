#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int words_count(char *str);
int *words_len(char *str, int num);

/**
 * strtow - a function that splits a string into words.
 * @str: the given string.
 * Return: a pointer to an array of strings.
 */
char **strtow(char *str)
{
	char **p;
	int *arr;
	int i, j, k, num;

	if (str == NULL || *str == '\0')
		return (NULL);

	num = words_count(str); /*counting the number of words in str */
	if (num == 0)
		return (NULL);

	p = malloc(sizeof(char **) * num + 1);
	if (p == NULL)
		return (NULL);

	arr = words_len(str, num); /* counting the length of each word */
	i = 0;
	for (k = 0; k < num; k++)
	{
		p[k] = malloc(sizeof(char) * arr[k] + 1);
		if (p[k] == NULL)
		{
			for (; k >= 0; k--)
				free(p[k]);
			free(p);
			return (NULL);
		}

		j = 0;
		for (; *(str + i); i++)
		{
			if (str[i] != ' ')
			{
				if (str[i + 1] != ' ' && str[i + 1] != '\0')
				{
					p[k][j] = str[i];
					j++;
				}
				else if (str[i + 1] == ' ' || str[i + 1] == '\0')
				{
					p[k][j] = str[i];
					p[k][j + 1] = '\0';
					i++;
					break;
				}
			}
		}
	}
	p[num] = NULL;
	return (p);
}

/**
 * words_count - a function that counts the number of words in a given string
 * @str: the given string
 * Return: an int variable that contains the number of words.
 */
int words_count(char *str)
{
	int i, num;

	num = 0;
	for (i = 0; *(str + i); i++)
	{
		if (str[i] != ' ')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				num++;
			else
				continue;
		}
	}

	return (num);
}

/**
 * words_len - a function that counts length of each word in a string
 * @str: the given string
 * @num: number of existing words in the string
 * Return: a pointer to an array that contains the length of each word
 * or NULL if it fails.
 */
int *words_len(char *str, int num)
{
	int *arr;
	int i, j;

	arr = malloc(sizeof(int) * num);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
		arr[i] = 0;

	i = 0;
	for (j = 0; j < num; j++)
	{
		for (; *(str + i); i++)
		{
			if (str[i] != ' ')
			{
				if (str[i + 1] != ' ' && str[i + 1] != '\0')
				{
					arr[j]++;
				}
				else if (str[i + 1] == ' ' || str[i + 1] == '\0')
				{
					arr[j]++;
					i++;
					break;
				}
			}
		}
	}
	return (arr);
}
