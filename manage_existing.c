#include "shell.h"
/**
 * manage_existing - takes care of existing functions
 * @instr: instructions that have been broken down
 * @the_std_inpt_instr: standrd input instructions are read here
 * Return: 0 or 1
 */
int manage_existing(char **instr, char *the_std_inpt_instr)
{
	struct existing existing = {"env", "exit"};

	if (_compare_strng(*instr, existing.env) == 0)
	{
		andika_njia();
		return (1);
	}
	else if (_compare_strng(*instr, existing.exit) == 0)
	{
		toka_terminal(instr, the_std_inpt_instr);
		return (1);
	}
	return (0);
}

