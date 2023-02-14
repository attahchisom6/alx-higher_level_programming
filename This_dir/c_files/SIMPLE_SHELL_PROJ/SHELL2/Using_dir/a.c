#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int execute(char **args)
{
    pid_t pid;
    char cmd[] = "/usr/bin/";
    char *envp[] = {NULL};
    int status;

    if (strcmp(args[0], "exit") == 0)
    {
        return (0);
    }
    strcat(cmd, args[0]);
    pid = fork();
    if (pid == 0)
    {
        if (execve(cmd,args,envp) == -1)
        {
            perror("Erorr can not execute the program");
        }
        exit(99);
    }
    else
    {
        wait(&status);
    }

    if (pid == -1)
    {
        return (0);
    }
    return (1);
}


char **parse(char *line)
{
    int buffersize = 60, i = 0;
    char **tokens;
    char *tok;
    char dil[6] = " \t\r\n\a";

    tokens = malloc(buffersize * sizeof(char*));

    printf("parse");
    if (tokens == NULL)
    {
        perror("Error while allocating memeory of tokens");
        exit(1);
    }

    tok = strtok(line, dil);

    while (tok != 0)
    {
        tokens[i] = tok;
        i++;

        if (i >= buffersize)
        {
            buffersize+=60;
            tokens = realloc(tokens, buffersize * sizeof(char *));
            
        }
        tok = strtok(0, dil);
    }
    tokens[i] = NULL;
    
    return (tokens);
}


char *read_line()
{
    char *buffer;
    size_t buffersize = 23;

    buffer = malloc(buffersize * sizeof(char));
    if (buffer == NULL)
    {
        perror("Error while allocating memeory");
        exit(1);
    }
    getline(&buffer, &buffersize, stdin);
    return (buffer);
}


int main(void)
{
    char *line;
    char **args;
    int status = 1;

    while (status)
    {
        printf("#cisfun$ ");
        line = read_line();
        args = parse(line);
        status = execute(args);
        free(args);
        free(line);
    }
    return (0);
}
