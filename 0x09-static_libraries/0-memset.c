#include "main.h"

/**
* _memset - Function that fills memory with a constant byte
*
* @s: pointer to memory area
* @b: character constant
* @n: number of bytes of memory area to be filled
*
* Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
