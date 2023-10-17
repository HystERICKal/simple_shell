#include "shell.h"
/**
 * secure_barriers - rescue them buffs
 * @free_moi: free this
 * Return: nadda
 */
void secure_barriers(char **free_moi)
{
	int r; /*counter*/

	if (!free_moi || free_moi == NULL)
		return; /*nothing to free*/

	for (r = 0; free_moi[r]; r++)
	{
		free(free_moi[r]); /*free this guy*/
	}
	free(free_moi);
}

