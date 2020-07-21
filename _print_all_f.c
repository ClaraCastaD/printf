#include "holberton.h"

/**
 * print_all - prints all formats.
 *@a: add description.
 *@b: add description.
 * Return: no return.
 */

int (*print_all(const char *a, int b))(va_list)
{
	types_es difftypes[] = {
		{"s", t_string},
		{"c", t_char},
		{"d", t_integer},
		{"i", t_integer},
		{NULL, NULL}
	};
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
