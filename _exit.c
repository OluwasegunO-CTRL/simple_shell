#include "main.h"
/**
 * my_exit - exits the shell
 *
 * @args: args passed
 * Return: Nothing
 */
int my_exit(char **args)
{
	free(args);
	/*exit(98)*/
	exit(0);
}
