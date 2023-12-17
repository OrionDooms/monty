#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#define MAX_ARGS 64
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

stack_t my_push(stack_t **head, int data);
int execute(char *buffer, unsigned int line);
int my_pall(stack_t *head);
void stack_it(char *result, unsigned int line);
void Error_file_and_argument(void);
void Error_open_file(char *str);
void file_contains_an_invalid_instruction(unsigned int line);
void cant_malloc(void);
size_t getline(char **lineptr, size_t *n, FILE *stream);

#endif
