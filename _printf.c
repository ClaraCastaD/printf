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
