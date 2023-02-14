#include "my_shell.h"

/**
 * delete_comment - deletes comment from user input
 * note that comment in a linux shell begins with the character '#'
 * @input:user input
 *
 * Return:user input without comment
 */

char *delete_comment(char *input)
{
	int k, up_to;


	up_to = 0;

	for (k = 0; input[k] != '\0'; k++)
	{
		if (input[k] == '#')
		{
			if (k == 0)
			{
				free(input);
				return (NULL);
			}

			if (input[k - 1] == ' ' || input[k - 1] == '\t' || input[k - 1] == ';')
				up_to = k;
		}
	}

	if (up_to != 0)
	{
		input = _realloc(input, k, up_to + 1);
		input[up_to] = '\0';
	}

	return (input);
}

/**
 * shell_loop - shell procesess of infinite loop that continues to
 * wait for user input
 * @mshell:shell database
 *
 * Return:void
 */

void shell_loop(m_data *mshell)
{
	int k_eof, loop;
	char *input;

	while(loop == 1)
	{
		write(STDOUT_FILENO, "MOSEshell ", 5);
		read_line(&k_eof);

		if (k_eof != -1)
		{
			input = delete_comment(input);
			if (input == NULL)
				continue;
			if (check_syntax_err(mshell, input) == 1)
			{
				mshell->status = 2;
				free(input);
				continue;
			}

			input = rep_var(mshell, input);
			loop = split_commands(mshell, loop);
			mshell->counter += 1;
			free(input);
		}

		else if (k_eof == -1)
		{
			loop = 0;
			free(input);
		}
	}
}

int main(void)
{
	m_data mshell;

	mshell.input = "Hello world";
	shell_loop(&mshell);
	return (0);
}
