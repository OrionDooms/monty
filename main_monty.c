#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Programming a stack.
 * @argc: number of argument
 * @argv: Takes a argument.
 * Return: 0 (Success) 1 (Error)
 */
int main(/*int argc, char **argv*/)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	unsigned int i = 0;

	/*FILE *file;

	if (argc != 2)
		Error_file_and_argument();
	file = fopen(argv[1], "r");
	if (!file)
		Error_open_file(argv[1]);*/
	buffer = NULL;
	while (1)
	{
		getline(&buffer, &bufsize, stdin);
		i++;
		execute(buffer, i);
	}
	free(buffer);
	/*fclose(file);*/
	return (0);
}
/**
 * execute - the execute of the stack.
 * @buffer: the argument.
 * @line: line number.
 * Return: 0 (success)
 */
int execute(char *buffer, unsigned int line)
{
	stack_t *stack = NULL;

	char *token;
	int i = 0;
	const char delimit[] = " ";
	char *args[MAX_ARGS];

	token = strtok(buffer, delimit);
	while (token != NULL && i < MAX_ARGS - 1)
	{
		args[i++] = token;
		token = strtok(NULL, delimit);
	}
	if (strcmp(args[0], "push") == 0)
		my_push(&stack, atoi(args[1]));
	else if (strcmp(args[0], "pall") == 0)
		my_pall(stack);
	else
		file_contains_an_invalid_instruction(line);
	return (0);
}
