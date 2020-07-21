#include "holberton.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: Character string
 * Return: success
 */
int _printf(const char *format, ...)
{
	va_list valist;
	unsigned int c = 0, d = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(valist, format);
	for (c = 0; format[c] != '\0'; c++)
	{
		if (format[c] == '%')
		{
			if (format[c + 1] == '%')
			{	_putchar('%');
				d++;
				c++;
			}
			else if (print_all(format, c + 1) != NULL)
			{	d = d + (print_all(format, c + 1))(valist);
				c++;
			}
			else
			{	_putchar(format[c]);
				d++;
			}
		}
		else
		{	_putchar(format[c]);
			d++;
		}
	}
	va_end(valist);
	return (d);
}

/**
 * print_all - prints anything
 *@a: add description
 *@b: add desxcription
 * Return: no return
 */

int (*print_all(const char *a, int b))(va_list)
{
	types_es difftypes[] = {
		{"s", t_string},
		{"c", t_char},
		{NULL, NULL}};
	int e;

	for (e = 0; difftypes[e].t != NULL; e++)
	{
		if (difftypes[e].t[0] == a[b])
		{
			return (difftypes[e].f);
		}
	}
	return (NULL);
}
