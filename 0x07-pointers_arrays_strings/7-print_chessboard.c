#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @: pointer to pieces to print
 *
 * Return: void
 */
void print_chessoard(char (*a)[8])
{
	int i, j;

	for  (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_outchar(a[i][j]);
		}
	}
}
