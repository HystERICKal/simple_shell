#include "shell.h"
/**
 *kagua- is the function inbuilt?
 *@terminn: input from terminal already broken down
 *@from_getl: this one is from getline
 *Return: integer
 */
int kagua(char **terminn, char *from_getl)
{
	if (manage_existing(terminn, from_getl))
		return (1);
	else if (**terminn == '/')
	{
		run_func(terminn[0], terminn);
		return (1);
	}
	return (0);
}

