#include <stdio.h>
#include <unistd.h>

/**
 * main - print argument without using ac
 * @ac: argument character
 * @av: argument variable
 * Return: 0;
 */

int main(int ac, char **av)
{
	int i =  1;

	while (av[i])
	{
		printf("The argument of  %d is : %s\n", i, av[i]);
		i++;
	}
	return (0);
}
