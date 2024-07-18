#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	int (*func)(va_list);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			func = get_print(format[i]);
			if (func)
				count += func(args);
			else
			{
				if (format[i] != '\0')
				{
					write(1, &format[i - 1], 1);
					write(1, &format[i], 1);
					count += 2;
				}
				else
				{
					count += write(1, &format[i - 1], 1);
				}
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}

