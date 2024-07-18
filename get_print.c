#include "main.h"

/**
 * get_print - gets the function for the given format specifier
 * @format: format specifier
 *
 * Return: pointer to the corresponding function, or NULL if not found
 */
int (*get_print(char format))(va_list)
{
	print func_type[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_mod},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int = 0;

	while (func_type[i].spec)
	{
		if (format == *fuc_type[i].spec)
			return (func_type[i].func);
		i++;
	}
	return (NULL);
}
