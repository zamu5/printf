#include "holberton.h"
/**
 * print_int - Print a int
 * @value - parameter
 * Return: Nothing
 */

void print_int(va_list value)
{
	int data = va_arg(value, int);
	int cont, cdata;

	if (data < 0)
	{
		_putchar(45);
		data = data * -1;
	}
	cdata = data;
	for (cont = 1; cdata > 9; cont = cont * 10)
		cdata = cdata / 10;
	while (data > 0)
	{
		if (data < 10)
			_putchar(data + '0');
		else
		{
			_putchar((data / cont)+ '0');
		}
		data = data % cont;
		cont = cont / 10;
	}
}
#include "holberton.h"
/**
 * print_char - print char type
 * @value: data
 * Return: Nothing
 */
void print_char(va_list value)
{
	int i;

	i = va_arg(value, int);
	_putchar(i);
}
#include "holberton.h"
/**
 * print_string - pring string type
 * @value: data
 * Return: Nothing
 */
void print_string(va_list value)
{
	char *data = va_arg(value, char*);
	int i;

	if (data == NULL)
		data = "(null)";
	for (i = 0; data[i] != '\0'; i++)
		_putchar(data[i]);
}
#include "holberton.h"
/**
 * inttype - Print a unsigned int
 * @value - parameter
 * Return: Nothing
 */
void print_unsigned_int(va_list value)
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
			_putchar((data / cont)+ '0');
		}
		data = data % cont;
		cont = cont / 10;
	}
}
