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
	int num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
		for (letter = 'a'; letter <= 'f'; letter++)
		{
			putchar(letter);
		}
	putchar('\n');
	/* your code goes there */
	return (0);
}
