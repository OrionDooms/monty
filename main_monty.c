#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Programming a stack.
 * @argc: number of argument
 * @argv: Takes a argument.
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	char *buffer = NULL;
	size_t bufsize = 0;
	unsigned int i = 0;

	FILE *file;

	if (argc != 2)
		Error_file_and_argument();
	file = fopen(argv[1], "r");
	if (!file)
		Error_open_file(argv[1]);
	buffer = NULL;
	while (1)
	{
		getline(&buffer, &bufsize, stdin);
		i++;
		execute(buffer, &stack, i);
	}
	free(buffer);
	fclose(file);
	return (0);
}
/**
 * execute - the execute of the stack.
 * @buffer: the argument.
 * @stack: the linked list.
 * @line: line number.
 * Return: 0 (success)
 */
int execute(char *buffer, stack_t **stack, unsigned int line)
{
	char *token;
	int i = 0;
	const char delimit[] = " \t";
	char result[100][100];

	token = strtok(buffer, delimit);
	while (token != NULL && i < 100)
	{
		strcpy(result[i], token);
		i++;
		token = strtok(NULL, delimit);
	}
	if (strcmp(result[0], "push") == 0)
	{
		my_push(*stack, atoi(result[1]), line);
		printf("%s\n", result[0]);
		 printf("%d\n", atoi(result[1]));
	}
	if (strcmp(result[0], "pall") == 0)
	{
		printf("%s\n", result[0]);
		my_pall(*stack);
	}
	else
		printf("NO");
	return (0);
}
