#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
				if (i != 19)
				{
				putchar(',');
				putchar(' ');
				}
	}
	putchar('\n');
	return (0);
}
