#include "monty.h"

vglobal_t vglob;

/**
 * free_vglob - free the global variables in the global struct
 *
 * Return:void
 */

void free_vglob(void)
{
	free_dmonty_list(&vglob.head);
	free(vglob.buffer);
	fclose(vglob.fd);
}

/**
 * init_vglob - initializes the variables in the global struct
 * @fd:file descriptor of the given file
 *
 * Return: void
 */

void init_vglob(FILE *fd)
{
	vglob.lifo_fifo = 1;
	vglob.curr_L = 1;
	vglob.arg = NULL;
	vglob.head = NULL;
	vglob.fd = fd;
	vglob.buffer = NULL;
}

/**
 * check_file - checks if a file exits, and if it can be opened
 * @ac:number of arguments
 * @av:argument vector
 *
 * Return:pointer to the file on success
 */

FILE *check_file(int ac, char *av[])
{
	FILE *fd;

	if (ac != 2)
	{
		usage_err();
		/*free_vglob();*/
	}

	fd = fopen(av[1], "r");
	if (fd == NULL)
	{
		fopen_err(av[1]);
		/*free_vglob();*/
	}

	return (fd);
}

/**
 * main - execution entry point
 * @ac:no of argument
 * @av: argument vector
 *
 * Return:0
 */

int main(int ac, char *av[])
{
	void (*f)(stack_m **f, unsigned int line_number);
	size_t size = 256;
	ssize_t nlines;
	FILE *fd;
	char *cmd[2] = {NULL, NULL};

	fd = check_file(ac, av);
	init_vglob(fd);
	nlines = getline(&vglob.buffer, &size, fd);

	while (nlines != -1)
	{
		cmd[0] = mose_strtok(vglob.buffer, " \t\n");
		if (cmd[0] == NULL)
		{
			usage_err();
			free_vglob();
		}

		if (cmd[0][0] != '#')
		{
			f = get_opcode(cmd[0]);
			if (f == NULL)
			{
				instruction_err(vglob.curr_L, cmd[0]);
				free_vglob();
			}

			vglob.arg = mose_strtok(NULL, " \t\n");
			
			f(&vglob.head, vglob.curr_L);
		}
		nlines = getline(&vglob.buffer, &size, fd);
		vglob.curr_L++;
	}

	free_vglob();
	return (0);
}
