#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @src: memory area where copied
 * @dest: memory area where stored
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *src, char *dest, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
