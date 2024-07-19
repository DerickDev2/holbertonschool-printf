#include "main.h"
/**
 * get_func - determine printing function
 * @s: string
 * Return: the desired function or NULL
*/
int (*get_func(char s))(va_list)
{
	type_t types[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_d},
		{'\0', NULL}
	};
	int i = 0;

	while (types[i].f != NULL)
	{
		if (s == types[i].opt)
		{
			return (types[i].f);
		}
		i++;
	}
	return (NULL);
}
