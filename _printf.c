#include "holberton.h"

/**
 *_printf.c - Function that produces output according to a format.
 *format: Character string
 *Return: success
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
			if (format[c + 1]  == '%')
			{
				_putchar ('%');
				d++; 
				c++;
			}
			else if (print_all(format, c + 1) != NULL)
			{
				d = d + (print_all(format, c + 1)(valist);
				c++;
			}
			else
			{
				_putchar(format[c]);
				d++;
			}
		}
	}
	va_end(valist);
	return (d);

}

/**
* print_all - prints anything
*@format: format
*
* Return: no return
*/

void print_all(const char * const format, ...)
{	
	int i, j, count;
	va_list valist;
	types difftypes[] = {
		{'c', t_char},
		{'s', t_string},
	};
	char *s = "";

	i = 0;
	count = 0;
	va_start(valist, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == difftypes[j].t)
			{
				printf("%s", s);
				difftypes[j].f(valist);
				s = ", ";
				count++;
				break;
			}
			j++;

		}
		i++;
	}
	printf("\n");
}

/**
 * t_char - print a character
 *@va:character
 *
 * Return: no return
 */
void t_char(va_list c)
{
	int c;

	c = va_arg(va, int);
	printf("%c", c);
}

/**
 * t_string - print a string
 *@va: pointer to string
 *
 * Return: no return
 */
void t_string(va_list s)
{
	char *s = va_arg(va, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
