#include "holberton.h"
/**
 * print_binary - convert decimal to binary and print
 * @lista: arguments
 * Return: number of characters printed
 */
int print_binary(va_list lista)
{
int i = 0, j, contador = 0;
int binarios[32];
unsigned int n;

n = va_arg(lista, int);
if (n == 0)
{
_putchar('0');
return (1);
}
while (n > 0)
{
binarios[i] = n % 2;
n = n / 2;
contador++;
i++;
}
if (i > 32)
{
return (-1);
}
i = i - 1;
for (j = i; j >= 0; j--)
{
_putchar(binarios[j] + '0');
}
return (contador);
}
/**
 * print_octal - convert decimal to octal and print
 * @lista: arguments
 * Return: number of characters printed
 */
int print_octal(va_list lista)
{
int i = 0, j, contador = 0;
int binarios[32];
unsigned int n;

n = va_arg(lista, int);
if (n == 0)
{
_putchar('0');
return (1);
}
while (n > 0)
{
binarios[i] = n % 8;
n = n / 8;
contador++;
i++;
}
if (i > 32)
{
return (-1);
}
i = i - 1;
for (j = i; j >= 0; j--)
{
_putchar(binarios[j] + '0');
}
return (contador);
}
