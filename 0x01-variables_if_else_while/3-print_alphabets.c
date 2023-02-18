#include <stdio.h>

/**
 * main - prints the alphabet in lower case.
 *
 * Return: 0 on success
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}
