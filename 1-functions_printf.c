#include "holberton.h"

/**
 * t_integer - prints a integer number.
 * @va: list macro.
 * Return: number to be printed.
 */
int t_integer(va_list va)
{
	long int num, i = 0, carry = 0, swap, swap_1;

	num = va_arg(va, int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (num < 0)
	{
		swap = num * (-1);
		_putchar('-');
		i++;
	}
	else
		swap = num;
	swap_1 = swap;
	carry += +1;
	for (; swap > 9; swap /= 10)
	{
		carry *= 10;
	}
	for (; carry > 0; carry /= 10)
	{
		_putchar(((swap_1 / carry) % 10) + 48);
		i++;
	}
	return (i);
}
