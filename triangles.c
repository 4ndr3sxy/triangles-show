#include <stdio.h>

/**
 * print_triangles - print four triangles
 *
 */

void print_triangles(int n)
{
	int i, j;
	int matrixInitial[n][n];
	/* fill array 1*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j <= i)
			{
				matrixInitial[i][j] = 1;
			}
			else
			{
				matrixInitial[i][j] = 0;
			}
		}
	}

	/*Print first triangle*/
	for (i = 0; i < n; i++)
	{
		char c;
		for (j = 0; j < n; j++)
		{
			c = matrixInitial[i][j];
			putchar(c + '0');
			putchar(' ');
		}
		putchar('\n');
	}
	putchar('\n');

	/* fill array 2*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i <= j)
			{
				matrixInitial[i][j] = 1;
			}
			else
			{
				matrixInitial[i][j] = 0;
			}
		}
	}

	/*Prind second triangle*/
	for (i = 0; i < n; i++)
	{
		char c;
		for (j = 0; j < n; j++)
		{
			c = matrixInitial[i][j];
			putchar(c + '0');
			putchar(' ');
		}
		putchar('\n');
	}
	putchar('\n');

	/* fill array 3*/
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= 0; j--)
		{
			if (j >= n - i - 1)
			{
				matrixInitial[i][j] = 1;
			}
			else
			{
				matrixInitial[i][j] = 0;
			}
		}
	}

	/*Print third triangle*/
	for (i = 0; i < n; i++)
	{
		char c;
		for (j = 0; j < n; j++)
		{
			c = matrixInitial[i][j];
			putchar(c + '0');
			putchar(' ');
		}
		putchar('\n');
	}
	putchar('\n');

	/* fill array 4*/
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j <= n - 1 - i)
			{
				matrixInitial[i][j] = 1;
			}
			else
			{
				matrixInitial[i][j] = 0;
			}
		}
	}

	/*Print fourth triangles*/
	for (i = 0; i < n; i++)
	{
		char c;
		for (j = 0; j < n; j++)
		{
			c = matrixInitial[i][j];
			putchar(c + '0');
			putchar(' ');
		}
		putchar('\n');
	}
	putchar('\n');

	/* fill array diamond*/
	int middleArray = (n / 2);
	int k;

	for (i = 0, j = n / 2; i < n; i++, j--)
	{
		for (k = 0; k < n; k++)
		{
			if (i <= n / 2)
			{
				if ((k >= middleArray - i && k <= middleArray + i))
				{
					matrixInitial[i][k] = 1;
				}
				else
				{
					matrixInitial[i][k] = 0;
				}
			}
			else
			{
				if ((k >= -(j) && k <= n - middleArray + n - i - 2))
				{
					matrixInitial[i][k] = 1;
				}
				else
				{
					matrixInitial[i][k] = 0;
				}
			}
		}
	}

	/*Print diamond*/
	for (i = 0; i < n; i++)
	{
		char c;
		for (j = 0; j < n; j++)
		{
			c = matrixInitial[i][j];
			putchar(c + '0');
			putchar(' ');
		}
		putchar('\n');
	}
}

/**
 * main - Initial function
 * Return: return 0 to success
 */
int main(void)
{

	print_triangles(11);

	return (0);
}
