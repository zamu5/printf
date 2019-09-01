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
	unsigned int i;
	int func;

	if (!format)
		return (-1);
	va_start(parameters, format);
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
				i = i + 2;
		}
		else
		{
			_print(format[i]);
			i++;
		}
	}
	va_end(parameters);
	return (_print(-1));
}

int _print(char c)
{
	static char buf[SIZE];
	static int i;

	if (c == -1 || i >= SIZE)
	{
		write(1, buf, i);
		i = 0;
		return (_strlen(buf));
	}
	
	buf[i++] = c;
	return (0);
}
