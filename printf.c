#include "holberton.h"
/**
 * _printf - print the task that the user whants
 * @format: it
s the format specified by the user
 * Return: Nothing
 */
void _printf(const char * const format, ...)
{
	va_list parameters;
	unsigned int i, j;
	data optiontype[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned_int},
		/* {"%", porcentagetype} */
	};
	va_start(parameters, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 37)
			for (j = 0; j < 5; j++)
			{
				if (format[i + 1] == *optiontype[j].type)
				{
					optiontype[j].functiontype(parameters);
					i = i + 2;
					continue;
				}
			}
		_putchar(format[i]);
	}
	va_end(parameters);

}
