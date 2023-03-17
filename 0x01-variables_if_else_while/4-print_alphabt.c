#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		if (sl != 'e' && sl != 'q')
		{
			putchar(sl);
		}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
