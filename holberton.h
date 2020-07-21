#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
*sttruct types_arguments - Struct op
*
* @t: The operator
* @f: The function associated
*/
typedef struct types_arguments
{
	char t;
	void (*f)(va_list va);
} types;t _printf(const char *format, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif /* HOLBERTON_H */
