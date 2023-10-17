#include "shell.h"
/**
 * tafuta_njia - lacate a path in global env
 * Return: if path is found or not
 */
char *tafuta_njia(void)
{
	int p;
	char **mazing = environ, *njia = NULL;

	for (; *mazing; mazing++)
	{
		if (_compare_strng2(*mazing, "PATH=", 5) == 0)
		{
			njia = *mazing; /*equate path to the envromen*/
			while (*njia && p < 5)
			{
				njia++;
				p++;
			}
			return (njia); /*return the path*/
		}
	}
	return (NULL);
}

