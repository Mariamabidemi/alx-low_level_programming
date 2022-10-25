#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: input string
 * return: length of a strind
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
