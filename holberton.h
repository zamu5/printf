#ifndef PRINTF
#define PRINTF
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char * const format, ...);
void print_char(va_list value);
void print_string(va_list value);
void print_int(va_list value);
void print_unsigned_int(va_list value);
void print_porcentage(va_list value);
typedef struct type
{
	char *type;
	void (*functiontype)();
} data;
#endif
