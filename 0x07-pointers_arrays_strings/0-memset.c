#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: a char input
 * @b: a char input 
 * @c: unsigned int
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for ( i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

