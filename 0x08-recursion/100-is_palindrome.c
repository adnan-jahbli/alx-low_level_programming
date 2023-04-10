#include "main.h"
#include <stdio.h>

int _strlen(char *s);
int is_pali(char *s, char *str, int len, int len_half);

/**
 * is_palindrome - a function that checks if a string is palindrome or not.
 * @s: the given string.
 * Return: 1 or 0.
 */
int is_palindrome(char *s)
{
	int end, half;

	end = _strlen(s);
	if (end % 2 == 0)
		half = (end - 1) / 2;
	else
		half = end / 2;
	return (is_pali(s, s, end - 1, half));
}
/**
 * _strlen - a function that returns the length of a string
 * @s: the given string
 * Return: length of given string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * is_pali - a function that returns 1 if a string is palindrome and 0 if not.
 * @s: the given string
 * @str: a string that holds the first value of s.
 * @len: the length of the string
 * @len_half: the half of the string length
 * Return: 1 or 0.
 */
int is_pali(char *s, char *str, int len, int len_half)
{
	if (*s != *(str + len))
		return (0);
	else if (*s == *(str + len) && len == len_half)
		return (1);
	else
		return (0 + is_pali(s + 1, str, len - 1, len_half));
}
