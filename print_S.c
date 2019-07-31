#include "holberton.h"
/**
 * print_string_S - pring string type
 * @value: data
 * Return: Nothing
 */
int print_string_S(va_list value)
{
	char *data = va_arg(value, char*);
	int i, cont = 0, env;

	if (data == NULL)
		data = "(null)";
	for (i = 0; data[i] != '\0'; i++)
	{
		if (data[i] < 32 || data[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			cont = cont + 2;
			env = data[i];
			if (env < 16)
			{
				_putchar('0');
				cont++;
			}
			cont = cont + print_S_HEXA(env);
		}
		else
		{
			_putchar(data[i]);
			cont++;
		}
	}

	return (cont);
}
/**
 * print_S_HEXA - print
 * @data: data from the user
 * Return: lentgh of the value that is printed
 */
int print_S_HEXA(unsigned int data)
{
	int x, mask, flag = 0, cont = 0;
	char hex[] = {"0123456789ABCDEF"};
	char num;


	if (data == 0)
	{
		_putchar('0');
		return (1);
	}
	for (x = 28; x >= 0; x = x - 4)
	{
		mask = (data >> x & 0x0F);
		if (mask)
			flag = 1;
		if (flag)
		{
			num = hex[mask];
			_putchar(num);
			cont++;
		}
	}
	return (cont);
}
