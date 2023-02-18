#include <stdio.h>

/**
 * main - prints the alphabet in lower case.
 *
 * Return: 0 on success
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');

	return (0);
}
