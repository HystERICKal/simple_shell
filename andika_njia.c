#include "shell.h"
/**
 * andika_njia - env string is printed out
 * Return: nadda
 */
void andika_njia(void)
{
	int p = 0;				  /*countr*/
	char **mazing = environ; /*path environment*/

	while (mazing[p])
	{
		write(STDOUT_FILENO, (const void *)mazing[p],
				_lengthofstring(mazing[p])); /* */
		write(STDOUT_FILENO, "\n", 1);
		p++;
	}
}

