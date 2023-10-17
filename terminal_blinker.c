#include "shell.h"
/**
 * terminal_blinker - time to enter command
 * Return: nadda
 */
void terminal_blinker(void)
{
	/*is it a terminal?*/
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		federa.connekt = 1;
	if (federa.connekt)
		write(STDERR_FILENO, "$ ", 2); /*show dollar sign as prompt*/
}

