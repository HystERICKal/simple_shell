#include "shell.h"
/**
 * _compare_strng - how different are the two strings
 * @strng1: string 1
 * @strng2: string 2
 * Return: int
 */
int _compare_strng(char *strng1, char *strng2)
{
	int m, reslt;

	for (m = 0; *(strng1 + m) == *(strng2 + m) && *(strng1 + m) != '\0'; m++)
		continue;

	reslt = (*(strng1 + m) - *(strng2 + m));

	return (reslt);
}

/**
 * _lengthofstring - how long is the string
 * @strng: the string
 * Return: int
 */
int _lengthofstring(char *strng)
{
	int the_tally = 0;

	while (*strng != '\0')
	{
		the_tally++;
		strng++;
	}
	return (the_tally);
}

/**
 * _compare_strng2 - twp strings comparison
 * @strng1: first string
 * @strng2: second strng
 * @b: number of bytes
 * Return: int
 */
int _compare_strng2(char *strng1, char *strng2, int b)
{
	int m = 0;

	while (strng1[m] && strng2[m] && m < b)
	{
		if (strng1[m] != strng2[m])
			return (strng1[m] - strng2[m]);

		m++;
	}
	return (0);
}

/**
 * _clone_strng - clone the strng
 * @strng: the string
 * Return: new cloned string
 */
char *_clone_strng(char *strng)
{
	char *new_strng;
	int m, how_long;

	if (strng == NULL) /*if there is no string*/
		return (NULL);

	how_long = _lengthofstring(strng); /*get string length*/

	new_strng = malloc(sizeof(char) * (how_long + 1)); /*allocate memory*/
	if (!new_strng)
		return (NULL); /*duplicate doesn't exist*/
	for (m = 0; *strng != '\0'; strng++, m++)
		new_strng[m] = strng[0];

	new_strng[m++] = '\0'; /*terminate with endof line char*/
	return (new_strng);	   /*return new string*/
}

/**
 * _find_letter_in_strng - find a letter in string
 * @strng: the string
 * @lettr: the letter
 * Return: the letter if found
 */
char *_find_letter_in_strng(char *strng, char lettr)
{
	for (; *strng; strng++)
	{
		if (*strng == lettr) /*if the string is the letter itself*/
			return (strng);
	}
	if (!lettr)
		return (strng); /*letter not found in sentence*/
	return (NULL);
}

