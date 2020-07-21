#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
  * struct types_arguments - Struct op
  * @t: The operator
  * @f: The function associated
  **/
typedef struct types_arguments
{
		char *t;
			int (*f)(va_list va);
} types_es;

int _putchar(char c);
int _printf(const char *format, ...);
int (*print_all(const char *a, int b))(va_list);
int t_string(va_list va);
int t_char(va_list va);

#endif /* HOLBERTON_H */
