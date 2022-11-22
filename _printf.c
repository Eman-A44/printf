#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - Printf Function
 * @format: format.
 * Return: Printed char
*/
int _printf(const char *format, ...)
{
va_list args;
int length = 0;
if (format == NULL)
	return (-1);
va_start(args, format);
length = _print_format(format, args);
va_end(args);
return (length);
}
