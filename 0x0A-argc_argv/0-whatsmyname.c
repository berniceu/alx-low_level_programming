#include "main.h"
#include <stdio.h>
/**
 * main - print name
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
(void)argc;
	printf("%s\n", *argv);
	return (0);
}
