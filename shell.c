#include "shell.h"
/**
 * main - entry point of program
 * @argc: the arg count
 * @argv: the arg vect
 * @envp: path env
 * Return: an int
 */
int main(int argc, char **argv, char *envp[])
{
	char *the_strip = NULL, *the_instr_pth = NULL, *njia = NULL;
	size_t container_bigness = 0;
	ssize_t the_strip_lenth = 0;
	char **the_instr = NULL, **manjia = NULL;
	(void)envp, (void)argv;
	if (argc < 1)
		return (-1);
	signal(SIGINT, manage_alert);
	while (1) /*keep it prompting*/
	{
		secure_barriers(the_instr); /*free the buffs*/
		secure_barriers(manjia);	/*deal with memory*/
		free(the_instr_pth);
		terminal_blinker(); /*prompt on terminal*/
		the_strip_lenth = getline(&the_strip, &container_bigness, stdin);
		if (the_strip_lenth < 0)
			break;
		detailz.the_strip_tally++;					/*increment*/
		if (the_strip[the_strip_lenth - 1] == '\n') /*go to next line*/
			the_strip[the_strip_lenth - 1] = '\0';	/*terminate sentence*/
		the_instr = command_breaker(the_strip);
		if (the_instr == NULL || *the_instr == NULL || **the_instr == '\0')
			continue;
		if (kagua(the_instr, the_strip))
			continue;
		njia = tafuta_njia();
		manjia = command_breaker(njia);
		the_instr_pth = cheki_njia(manjia, the_instr[0]);
		if (!the_instr_pth)
			perror(argv[0]);
		else
			run_func(the_instr_pth, the_instr);
	}
	if (the_strip_lenth < 0 && federa.connekt)
		write(STDERR_FILENO, "\n", 1);
	free(the_strip);
	return (0);
}

