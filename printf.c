#include "holberton.h"
/**
 * _printf - format and print data
 * @format: format specified by the user
 *
 * Return: size in bytes of the printed string.
 */
int _printf(const char * const format, ...)
{
	va_list parameters;
	unsigned int i, j, bytes;

	if (!format)
		return (-1);

	data optiontype[] = {
		{"c", print_char}, {"s", print_string}, {"d", print_int},
		{"i", print_int}, {"u", print_unsigned_int},
		{"%", print_porcentage}, {NULL, NULL}
	};
	va_start(parameters, format);
	bytes = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (optiontype[j].type)
			{
				if (format[i + 1] == *optiontype[j].type)
				{
					bytes += optiontype[j].functiontype(parameters);
					i = i + 2;
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			bytes++;
			i++;
		}
	}
	va_end(parameters);
	return (bytes);
}
