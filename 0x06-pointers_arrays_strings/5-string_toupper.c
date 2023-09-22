#include "main.h"
/**
 * string_toupper - a function change  all lowercase letters to of a string
 *  uppercase.
 * @n: input string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *n);
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if (*(n + i) >= 'a' && *(n + i) <= 'z')

		{
			*(n + i) = *(n + i) - 32;
		}
		i++;
	}
	return (n);
}
