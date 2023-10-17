#ifndef SHELL_H
#define SHELL_H

#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

int kagua(char **terminn, char *from_getl);
void terminal_blinker(void);
void manage_alert(int d);
char **command_breaker(char *whole_command);
char *cheki_njia(char **njia, char *the_instr);
char *ongeza_njia(char *njia, char *instruct);
int manage_existing(char **instr, char *the_std_inpt_instr);
void toka_terminal(char **the_instr, char *read_stndrd_inp);
void andika_njia(void);
int _compare_strng(char *strng1, char *strng2);
int _lengthofstring(char *strng);
int _compare_strng2(char *strng1, char *strng2, int b);
char *_clone_strng(char *strng);
char *_find_letter_in_strng(char *strng, char lettr);
void run_func(char *term_instr, char **instr_as_arr);
char *tafuta_njia(void);
void secure_barriers(char **free_moi);

/**
 * struct existing - the existing struct
 * @env: The env
 * @exit: The exit
 * Description: the existing struct
 */
struct existing
{
	char *env;
	char *exit;
} existing;

/**
 * struct detailz - the detailz struct
 * @final_exit: the final exit
 * @the_strip_tally: the strip tally
 * Description: the detailz struct
 */
struct detailz
{
	int final_exit;
	int the_strip_tally;
} detailz;

/**
 * struct federa - the federa struct
 * @connekt: the connect
 * Description: the federa struct
 */
struct federa
{
	bool connekt;
} federa;

#endif

