#include "shell.h"
/**
 * ongeza_njia - concatenate the path
 * @njia: where the executable lies
 * @instruct: instruction from terminal
 * Return: char
 */
char *ongeza_njia(char *njia, char *instruct)
{
	char *cont;
	size_t g, h;

	if (instruct == 0)
		instruct = "";

	if (njia == 0)
		njia = "";

	cont = malloc(sizeof(char) * (_lengthofstring(njia) +
		_lengthofstring(instruct) + 2));
	if (!cont)
		return (NULL);

	for (g = 0; njia[g]; g++)
	{
		cont[g] = njia[g];
	}

	if (njia[g - 1] != '/')
	{
		cont[g] = '/';
		g++;
	}

	for (h = 0; instruct[h]; h++)
	{
		cont[g + h] = instruct[h];
	}
	cont[g + h] = '\0';
	return (cont);
}

