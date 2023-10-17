#include "shell.h"
/**
 * cheki_njia - is it a good path
 * @njia: path broken down
 * @the_instr: the instruction entered on terminal
 * Return: whole path if successful
 */
char *cheki_njia(char **njia, char *the_instr)
{
	int p;
	char *reslt;

	for (p = 0; njia[p]; p++)
	{
		reslt = ongeza_njia(njia[p], the_instr); /*concatenete path*/
		if (access(reslt, F_OK | X_OK) == 0)
			return (reslt); /*return the result*/
		free(reslt);		/*memory management*/
	}
	return (NULL);
}

