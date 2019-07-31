#include "holberton.h"
#include <string.h>

/**
 * print_rot13 - prints a rot13'd string
 * @value: provided string
 *
 * Return: length of the printed string, if memory allocation fails,
 * the function will return -1.
 */
int print_rot13(va_list value)
{
	int i, j;
	char *p;
	char *converted;
	char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	p = va_arg(value, char *);
	if (!p)
	{
		write(1, "(null)", 6);
		return (6);
	}
	converted = malloc(sizeof(char) * _strlen(p));
	if (!converted)
	{
		free(converted);
		return (-1);
	}

	for (i = 0; p[i]; i++)
	{
		for (j = 0; charset[j]; j++)
		{
			if (p[i] == charset[j])
			{
				converted[i] = rot13[j];
				break;
			}
		}
		if (!charset[j])
			converted[i] = p[i];
	}
	write(1, converted, i);
	free(converted);

	return (i);
}
