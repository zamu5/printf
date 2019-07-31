<h1>_printf</h1>
<h3>Project details</h3>
Recreate a mini version of printf standard library using C language.

<h3>Function prototype</h3>
int _printf(const char *format, ...);
Background
A standard printf is a built-in C function in stdio.h standard library. It has a return type int and accepts variable arguments.

<h3>Return value</h3>
Upon successful return, printf returns the number of characters printed (excluding the null byte used to end output to strings).

If an output error is encountered, a negative value is returned.

<h3>Syntax</h3>
%[flags][width][.precision][length]type
<h3>Format specifiers</h3>
<table>
  <tr><td>Specifier type</td><td>	Description</td></tr>
  <tr><td>c</td><td>Single character</td>  </tr>
  <tr><td>s</td><td>String of characters</td></tr>
<tr><td>d or i</td><td>Signed decimal integer</td></tr>
  <tr><td>b</td><td>Unsigned binary</td></tr><tr>    
<tr><td>u</td>	<td>Unsigned decimal integer</td></tr>
<tr><td>o</td>	<td>Unsigned octal</td></tr>
<tr><td>x</td>	<td>Unsigned hexadecimal integer (lowercase)</td></tr>
<tr><td>X</td>	<td>Unsigned hexadecimal integer (uppercase)</td></tr>
<tr><td>S</td>	<td>Unicode string</td></tr>
<tr><td>p</td>	<td>Pointer address</td></tr>
<tr><td>%</td>	<td>Two %% characters will write a single % character</td></tr>
<tr><td>r</td>	<td>Reversed string</td></tr>
<tr><td>R</td>	<td>Rot13'ed string</td></tr>
  </table>
<h2>Flags</h2>
<table>
  <tr><td>Flag</td>	<td>Description</td></tr>
  #	<tr><td>Use with o, x, or X specifiers</td> <td>the value is preceded with 0, 0x, or 0X respectively for nonzero value</td></tr>
  <tr><td>0</td>	<td>Left pads number with zeroes</td></tr>
<tr><td>+</td>	<td>Prepends a plus sign '+' for postive numbers</td></tr>
<tr><td>space</td>	<td>a blank space is inserted before the value</td></tr>
<tr><td>-</td>	<td>Left justify with given field width</td></tr>
<tr><td>Length</td> <td>modifiers</td></tr>
<tr><td>Length</td>	<td>d i	u o x X</td></tr>
<tr><td>l</td>	<td>long int	unsigned long</td></tr>
  <tr><td>h</td>	<td>short int	unsigned short</td></tr>

</table>
<h3>Example</h3>
<h2>Input</h2>
#include "holberton.h"

int main(void)
{
	int n = 5;
	_printf("I like %d dogs.\n", n);

	return (0);
}

<h2>Output</h2>
I like 5 dogs.
<h3>Compilation</h3>
Files are compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic *.c

<h3>Authors</h3>
Javier Feo and Sergio Zamudio
