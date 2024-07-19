#include "main.h"

/**
 * get_print - Selects the correct function to perform the operation
 * @format: The format specifier passed to _printf
 *
 * Return: A pointer to the function that corresponds
 *         to the given format specifier
 */
int (*get_print(char format))(va_list)
{
	int i;
	print func_type[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_mod},
		{"d", print_int},
		{"i", print_int},
		{"r", print_reverse},
		{NULL, NULL}
	};

	for (i = 0; func_type[i].specifier != NULL; i++)
	{
		if (*(func_type[i].specifier) == format)
			return (func_type[i].f);
	}
	return (NULL);
}

