#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * main - Entry point
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;
	char x[50], y[50]

	_printf("Let's print a simple sentence.\n");
	scanf("%c", &x);
	printf("Let's print a simple sentence.\n");
	scanf("%c", &y);
	len = strlen(x);
	len2 = strlen(y);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
