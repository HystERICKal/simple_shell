#include "shell.h"
/**
 * _printlettr - puts char to stndrd outpt
 * @chrr: char
 * Return: int
 */
int _printlettr(char chrr)
{
	return (write(1, &chrr, 1)); /*write the character*/
}

/**
 * string_printr - write a strng to stndrd outpt
 * @strng: the string
 * Return: int
 */
int string_printr(char *strng)
{
	int z;

	for (z = 0; strng[z] != '\0'; z++)
	{
		_printlettr(strng[z]); /*write string character by character*/
	}

	return (z);
}

