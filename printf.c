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
			else
			{
				bytes += func;
				i = i + 2;
			}
		}
		else
		{
			bytes = _print(format[i]);
			i++;
		}
	}
	va_end(parameters);
	_print(-1);
	return (bytes);
}

int _print(char c)
{
	static char buf[SIZE];
	static int i;

	if (c == -1 || i >= SIZE)
	{
		write(1, buf, i);
		i = 0;
		return (0);
	}
	
	buf[i++] = c;
	return (i);
}
