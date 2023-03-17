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
	char cl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		putchar(sl);
	}
	for (cl = 'A'; cl <= 'Z'; cl++)
	{
		putchar(cl);
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
