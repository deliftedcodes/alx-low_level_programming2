#include <stdio.h>

/**
 * main - prints the alphabet in lower case.
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	char b;
	
	for (a = '0'; a <= '9'; a++)
		putchar(a);
	
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
