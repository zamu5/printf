#include "holberton.h"
/**
 * print_int - Print a int
 * @value: parameter
 * Return: Nothing
 */
int print_int(va_list value)
{
	int num = va_arg(value, int);
	int i, bytes, cdata;
	char *buf;

	if (num < 0)
		_putchar(45);

	cdata = num;
	for (i = 1; cdata > 9 || cdata < -9; i++)
		cdata = cdata / 10;

	buf = malloc(sizeof(char) * i);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	bytes = i;
	i--;
	while (num != 0)
	{
		if (num % 10 > 0)
			buf[i] = (num % 10) + '0';
		else
			buf[i] = ((num % 10) * -1) + '0';
		num /= 10;
		i--;
	}

	write(1, buf, bytes);
	free(buf);
	return (bytes);
}
/**
 * print_char - print char type
 * @value: data
 * Return: Nothing
 */
int print_char(va_list value)
{
	int i;

	i = va_arg(value, int);
	_putchar(i);

	return (1);
}
/**
 * print_string - pring string type
 * @value: data
 * Return: Nothing
 */
int print_string(va_list value)
{
	char *data = va_arg(value, char*);
	int i;

	if (data == NULL)
		data = "(null)";
	for (i = 0; data[i] != '\0'; i++)
		_putchar(data[i]);

	return (i);
}
/**
 * print_unsigned_int - Print a unsigned int
 * @value: parameter
 * Return: Nothing
 */
int print_unsigned_int(va_list value)
{
	int data = va_arg(value, int);
	int cont, cdata;

	data = data * -1;
	cdata = data;
	for (cont = 1; cdata > 9; cont = cont * 10)
		cdata = cdata / 10;
	while (data > 0)
	{
		if (data < 10)
			_putchar(data + '0');
		else
		{
			_putchar((data / cont) + '0');
		}
		data = data % cont;
		cont = cont / 10;
	}

	return (cont);
}
/**
 * print_porcentage - Print a unsigned int
 * @value: parameter
 * Return: Nothing
 */
int print_porcentage(va_list value __attribute__((unused)))
{
	_putchar(37);
	return (1);
}
