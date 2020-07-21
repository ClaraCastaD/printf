#include "holberton.h"

/**
 * t_char - print a character
 *@va:character
 *
 * Return: no return
 */
int t_char(va_list va)
{
	int c;

	c = va_arg(va, int);
	_putchar(c);
	return (1);
}

/**
 * t_string - print a string
 *@va: pointer to string
 * Return: no return
 */
int t_string(va_list va)
{
	char *st;
	int f;

	st = va_arg(va, char *);

	if (st == NULL)
	{
		st = "(null)";
	}
	for (f = 0 ; st[f] != '\0' ; f++)
	{
		_putchar(st[f]);
	}
	return (f);
}
