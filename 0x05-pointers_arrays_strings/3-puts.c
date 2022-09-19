able File  17 lines (16 sloc)  221 Bytes

#include "main.h"
#include "2-strlen.c"
/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
