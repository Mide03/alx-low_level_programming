#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets in reverse'
 * Return: Each retutn 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}