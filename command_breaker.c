#include "shell.h"
/**
 * command_breaker - breaks up a sentence (command/instruction in this case)
 * @whole_command: the command/instruction to be broken up
 * Return: all the broken up commands
 */
char **command_breaker(char *whole_command)
{
	char *contein = NULL, *conteinp = NULL,
	     *sekshon = NULL, *sepratr = " :\t\r\n";
	char **sekshonz = NULL;
	int sekshonbigness = 1;
	size_t q = 0, bendra = 0;

	contein = _clone_strng(whole_command);
	if (!contein)
		return (NULL); /*doesn't exist*/
	conteinp = contein;
	for (; *conteinp; conteinp++)
	{
		if (_find_letter_in_strng(sepratr, *conteinp) != NULL && bendra == 0)
		{
			sekshonbigness++; /*increment*/
			bendra = 1;
		}
		else if (_find_letter_in_strng(sepratr, *conteinp) == NULL && bendra == 1)
			bendra = 0;
	}
	sekshonz = malloc(sizeof(char *) * (sekshonbigness + 1)); /*allocate memory*/
	sekshon = strtok(contein, sepratr);						  /*break string*/
	for (; sekshon; q++)
	{
		sekshonz[q] = _clone_strng(sekshon);
		if (sekshonz[q] == NULL)
		{
			free(sekshonz); /*memory management*/
			return (NULL);
		}
		sekshon = strtok(NULL, sepratr);
	}
	sekshonz[q] = '\0'; /*end of string*/
	free(contein);		/*memory management*/
	return (sekshonz);
}

