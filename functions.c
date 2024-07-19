#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: the character to be printed
 * Return: 1 (on success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_c - prints a character
 * @args:number of arguments
 * Return: 1 (on success)
*/
int print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
/**
 * print_s - prints a string
 * @args:number of arguments
 * Return: count of characters printed
*/
int print_s(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_percent - prints a percent character
 * @args:number of arguments
 * Return: 1 (on success)
*/
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_d - prints an integer
 * @args:number of arguments
 * Return: count of digits printed
*/
int print_d(va_list args)
{
	unsigned int i = 0;
	unsigned int div = 1;
	int numb = va_arg(args, int);
	unsigned int tmp;

	if (numb < 0)
	{
		_putchar('-');
		i++;
		tmp = -numb;
	}
	else
	{
		tmp = numb;
	}
	while (tmp / div > 9)
	{
		div *= 10;
	}
	while (div >= 1)
	{
		_putchar((tmp / div) + 48);
		i++;
		tmp %= div;
		div /= 10;
	}
	return (i);
}
