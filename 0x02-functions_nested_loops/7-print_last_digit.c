#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @t: the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int t)
{
	int ld = t % 10;

	if (ld < 0)
		ld *= -1;

	_putchar (ld + '0');

	return (0);
}
