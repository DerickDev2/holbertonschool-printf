#include "main.h"
/**
 * _printf - prints everything
 * @format: format string
 * Return: the count of printed characters
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;
	int (*func_ptr)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	if (*format)
	{
		while (format[i])
		{
			if (format[i] == '%' && (!format[i + 1] || format[i + 1] == '\0'))
				return (-1);
			if (format[i] == '%')
			{
				func_ptr = get_func(format[i + 1]);
				if (func_ptr)
				{
					count += func_ptr(args);
					i += 2;
					continue;
				}
			}
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
