#include "holberton.h"

/**
 * get_print_function - returns the pointer to a print function from
 * a format specifier provided to _printf.
 * @c: format specifier
 *
 * Return: pointer to the function.
 *
 * If the provided format specifier doesn't match with any function, the
 * function will return a pointer to the function zero.
 */
int (*get_print_function(char c))(va_list)
{
	int i;
	data optiontype[] = {
		{"c", print_char}, {"s", print_string}, {"d", print_int},
		{"i", print_int}, {"u", print_unsigned_int},
		{"%", print_percentage}, {NULL, NULL}
	};

	i = 0;
	while (optiontype[i].type)
	{
		if (*optiontype[i].type == c)
			return (optiontype[i].functiontype);
		i++;
	}
	return (zero);
}
