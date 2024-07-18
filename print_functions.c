#include "main.h"
#include <stdio.h>

/**
 * print_char - prints a character
 * @args: argument list
 *
 * Return: the number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * print_string - prints a string
 * @args: argument list
 *
 * Return: the number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";

	while (str[len])
		len++;

	return (write(1, str, len));
}

/**
 * print_mod - prints a percent sign
 * @args: argument list
 *
 * Return: the number of characters printed
 */
int print_mod(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 * print_int - prints an integer
 * @args: argument list
 *
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	char buf[20];
	int len = 0;

	snprintf(buf, sizeof(buf), "%d", n);

	while (buf[len])
		len++;

	return (write(1, buf, len));
}

/**
 * print_reverse - prints a string in reverse
 * @args: argument list
 *
 * Return: the number of characters printed
 */
int print_reverse(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
		str = "(null)";

	
	while (str[len])
		len++;

	
	while (len > 0)
	{
		len--;
		putchar(str[len]);
	}

	return len;
}

