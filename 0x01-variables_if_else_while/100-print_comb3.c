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
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num2 > num1)
			{
				if (num1 == num2)
					continue;
				putchar('0' + num1);
				putchar('0' + num2);
				if (num1 == 8 && num2 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
			/**
			  *if (num1 == num2 && num2 > num1)
			  *continue;
			  */
			/**
			* putchar('0' + num1);
			* putchar('0' + num2);
			* putchar(',');
			* putchar(' ');
			*/
		}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
