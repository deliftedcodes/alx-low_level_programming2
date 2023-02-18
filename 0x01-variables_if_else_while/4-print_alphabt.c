#include <stdio.h>

/**
 * main - prints the alphabet in lower case.
 *
 * Return: 0 on success
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		 if (a == 'q' || a == 'e')
                        continue;
		 {
			putchar(a);
		 }
	}
	putchar('\n');

	return (0);
}
