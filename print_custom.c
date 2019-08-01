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

/**
 * print_rev - prints a string backwards
 * @value: provided string
 *
 * Return: size in bytes of the output.
 */
int print_rev(va_list value)
{
	char *s = va_arg(value, char *);
	char *reversed;
	int i, len;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = _strlen(s);

	reversed = malloc(sizeof(char) * len);
	if (reversed == NULL)
	{
		free(reversed);
		return (-1);
	}

	len--;
	for (i = 0; len >= 0; i++, len--)
		reversed[i] = s[len];
	
	write(1, reversed, i);
	free(reversed);
	return (i);
}
