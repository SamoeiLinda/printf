#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include<unistd.h>
#include <limits.h>

/**
 *  * main - Entry point
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's print a simple sentence.\n");
	len2 = printf("Let's print a simple sentence.\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}


/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 *  * struct _format - Typedef struct
 * @type: Format
 * @f: The function associated
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif  /* _MAIN_H */
