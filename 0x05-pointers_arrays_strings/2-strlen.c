#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s: -string to be cheched
 * Return: The length of the string
 */

int _strlen(char *s)
{
int string_length = 0;

while (s[string_length])
	string_length++;
return (string_length);
}
