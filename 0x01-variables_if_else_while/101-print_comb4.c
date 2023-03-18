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
	int num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 9; num3++)
			{
				if (num3 > num2 && num2 > num1)
				{
					if (num1 == num2 && num2 == num3)
						continue;
					putchar('0' + num1);
					putchar('0' + num2);
					putchar('0' + num3);
					if (num1 == 7 && num2 == 8 && num3 == 9)
						continue;
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	/* your code goes there */
	return (0);
}
