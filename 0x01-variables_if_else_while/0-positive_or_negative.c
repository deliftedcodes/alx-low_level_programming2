#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Variable If Else
 * 
 * Return: 0 on Success.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		printf("%d is 0\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
