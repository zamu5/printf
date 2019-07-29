#ifndef PRINTF
#define PRINTF
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char * const format, ...);
int (*get_print_function(char c))(va_list);
int print_char(va_list value);
int print_string(va_list value);
int print_int(va_list value);
int print_unsigned_int(va_list value);
int print_percentage(va_list value);
int zero();
/**
 * struct type - struct of type of data
 * @type: type od data
 * @functiontype: pointer to de function
 */
typedef struct type
{
	char *type;
	int (*functiontype)();
} data;
#endif
