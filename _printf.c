#include "main.h"
#include <stdlib.h>

/**
*  * _printf - prints anything
* @format: list of argument types passed to the function
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int f = 0, count = 0;
	va_list valist;

	va_start(valist, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			continue;
		}

		if (format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
			continue;
		}

		if (format[i + 1] == '\0')
			return (-1);

		f = _identifiers(&format[i + 1], valist);
		if (f == -1 || f != 0)
			i++;

		if (f > 0)
			count += f;

		if (f == 0)
		{
			_putchar('%');
			count++;
		}
	}
	va_end(valist);
	return (count);
}
