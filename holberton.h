#ifndef PRINTF
#define PRINTF
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int print_char(va_list value);
int print_string(va_list value);
int print_int(va_list value);
int print_unsigned_int(va_list value);
int print_percentage(va_list value);
typedef struct type
{
	char *type;
	int (*functiontype)();
} data;
#endif
