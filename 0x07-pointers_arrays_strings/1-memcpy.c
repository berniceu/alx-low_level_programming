#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: number of bytes
 * @src: source memory area
 * @dest: destination
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{

		dest[i] = src[i];
		n--;
	}
	return (dest);
}
