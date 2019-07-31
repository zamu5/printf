#ifndef PRINTF
#define PRINTF
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

int _putchar(char c);
int _strlen(char *s);

int _printf(const char * const format, ...);
int (*get_print_function(char c))(va_list);
int print_char(va_list value);
int print_string(va_list value);
int print_int(va_list value);
int print_unsigned_int(va_list value);
int print_percentage(va_list value);
int print_bin(va_list value);
int print_octal(va_list value);
int print_hexa(va_list value);
int print_HEXA(va_list value);
int print_pointer(va_list value);
int print_string_S(va_list value);
int print_S_HEXA(unsigned int data);
int print_rot13(va_list value);


int unknown(void);
int output_error(void);

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
