#include "holberton.h"
/**
 * print_int - function that returns an int to signed decimal
 * @xd: arguments passed
 * Return: length of integers
 */
int print_int(va_list xd)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(xd, int);
	div = 1;
	len = 0;
	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print_string - specificer s
 * @xd: valist
 * Return: total characters
 */
int print_string(va_list xd)
{
	int i;
	char *s;

	s = va_arg(xd, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}

/**
 * print_char - specificer c
 * @xd: valist
 * Return: asd
 */
int print_char(va_list xd)
{
	_putchar(va_arg(xd, int));
	return (1);
}
/**
 * print_porcentaje - Prints a percent symbol
 * @xd: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_porcentaje(va_list xd)
{
	if (xd != NULL)
	{

	}
	_putchar('%');
	return (1);
}
/**
 * print_unsigned - fgsd
 * @lista: asfdas
 *Return: asdf
 */
int print_unsigned(va_list lista)
{
int div, len;
unsigned int num;

num = va_arg(lista, int);
div = 1;
len = 0;
while (num / div > 9)
{
div *= 10;
}
while (div != 0)
{
len += _putchar('0' + (num / div));
num %= div;
div /= 10;
}
return (len);
}
