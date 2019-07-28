#include "holberton.h"
/**
 * _printf - print the task that the user whants
 * @format: it
s the format specified by the user
 * Return: Nothing
 */
int _printf(const char * const format, ...)
{
	va_list parameters;
	unsigned int i, j;

	data optiontype[] = {
		{"c", print_char}, {"s", print_string}, {"d", print_int},
		{"i", print_int}, {"u", print_unsigned_int},
		{"%", print_porcentage}, {NULL, NULL}
	};
	va_start(parameters, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			j = 0;
			while (optiontype[j].type) 
			{
				if (format[i + 1] == *optiontype[j].type)
				{
					optiontype[j].functiontype(parameters);
					i = i + 2;
					break;
				}
				j++;
			}
		}
		_putchar(format[i]);
	}
	va_end(parameters);
	return (i);
}
