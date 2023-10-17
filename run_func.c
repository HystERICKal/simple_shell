#include "shell.h"
/**
 * run_func - runs the command on terminal
 *@term_instr: entered instruction
 *@instr_as_arr: this is an array
 * Return: nadda
 */
void run_func(char *term_instr, char **instr_as_arr)
{
	pid_t the_pid_kid;
	int howzit;
	char **mazing = environ;

	the_pid_kid = fork();
	if (the_pid_kid < 0)
		perror(term_instr);
	if (the_pid_kid == 0)
	{
		execve(term_instr, instr_as_arr, mazing); /*process within another*/
		perror(term_instr);						  /*print error if any*/
		free(term_instr);						  /*free memory*/
		secure_barriers(instr_as_arr);			  /*and buffers*/
		exit(98);								  /*exit code*/
	}
	else
		wait(&howzit); /*chill*/
}

