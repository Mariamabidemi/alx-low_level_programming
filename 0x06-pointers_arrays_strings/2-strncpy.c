#include "main.h"

/**
 * _strncpy - copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: numbers of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\n')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\n';
		j++;
	}
	return (dest);
}
