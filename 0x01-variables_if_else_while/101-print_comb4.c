#include <stdio.h>

/**
 * main - entry point
 * Return: alway returns 0
 */

int main(void)
{
		int m;
		int n;
		int k;

		for (m = 0; m <= 9; m++)
		{
			for (n = 0; n <= 9; n++)
			{
				for (k = 0; k <= 9; k++)
				{
					if (k > n && n > m)
					{
						putchar(m + '0');
						putchar(n + '0');
						putchar(k + '0');
						if (m != 7 || n != 8 || k != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
