#include "main.h"

/**
 * factorial -  function that returns the value of x raised to the power of y.
 * @x: the first number
 * @y: second numnber
 * Return: 1 if n is 0 and -1 if its less than 0,
 * and returns the value of x raised to the power of x otherwise.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
