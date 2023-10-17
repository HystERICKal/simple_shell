#include "shell.h"
/**
 *manage_alert- what signal is it
 *@d: signal count
 *Return: nadda
 */
void manage_alert(int d)
{
	(void)d;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}

