#include "main.h"

/**
 * _strlen - check the code
 * @s: pointer
 * Return: n
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);
}
