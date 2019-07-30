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
	unsigned int i, bytes;
	int func;

	if (!format)
		return (-1);
	va_start(parameters, format);
	bytes = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_print_function(format[i + 1])(parameters);
			if (func == -1)
			{
				va_end(parameters);
				return (-1);
			}
			else if (func)
			{
				bytes += func;
				i = i + 2;
			}
			else
			{
				_putchar(format[i]);
				bytes++;
				i++;
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
