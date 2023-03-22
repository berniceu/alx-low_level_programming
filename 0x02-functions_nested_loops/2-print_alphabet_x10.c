#include "main.h"
/**
 * main - Entry point
 * Description: 'print 10 times the alphabet'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; j++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
