#include "shell.h"
/**
 * toka_terminal - get out of private shell
 * @the_instr: instruction broken down
 * @read_stndrd_inp: the standrd input is read from here
 * Return: nadda
 */
void toka_terminal(char **the_instr, char *read_stndrd_inp)
{
	free(read_stndrd_inp);		/*free mem*/
	secure_barriers(the_instr); /*free buff*/
	exit(0);					/*exit code*/
}

