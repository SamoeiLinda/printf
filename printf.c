#include "main.h"

/**
 *  * _printf - prints out a formatted string
 * @format: the string to be formatted
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
	int len;

	va_list list;
	va_start(list, format);
	len = vfprintf(stdout, format, list);
	va_end(list);

	return (len);
}
