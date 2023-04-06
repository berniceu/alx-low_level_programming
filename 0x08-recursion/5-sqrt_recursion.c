#include "main.h"
/**
 * _sqrt_recursion - return natural square root of number
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_recursion(n, 0));
}
int main(void)
{
	int i;
	int n;

	if (i * i > n)
	return (-1);

	if (i * i == n)
	return (i);

	return (_sqrt_recursion(n, i + 1));
}
