#include "3-calc.h"

/**
 * op_add - a function that computes the sum of two integers
 * @a: first number
 * @b: second number
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that substracts an intger from another
 * @a: first number
 * @b: second number
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: first number
 * @b: second number
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers
 * @a: first number
 * @b: second number
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that returns the reminder
 * of the division of two integers
 * @a: first number
 * @b: second number
 * Return: returns the remainder of division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
