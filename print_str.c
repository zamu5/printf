#include "holberton.h"

/**
 * print_char - prints a character
 * @value: list of va_args
 *
 * Return: 1
 */
int print_char(va_list value)
{
	int i = va_arg(value, int);

	return (_putchar(i));
}

/**
 * print_string - prints an array of characters
 * @value: list of va_args
 *
 * Return: amount of bytes printed to the output
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
 * print_percentage - prints a literal '%' character
 * @value: list of va_args
 *
 * Return: 1
 */
int print_percentage(va_list value __attribute__ ((unused)))
{
	return (_putchar('%'));
}
