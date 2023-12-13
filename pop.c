#include "monty.h"
/**
 * pop -  removes the top element of the stack.
 * @head: head of a linked list.
 * @line: the line number.
 * Return: return a linked list;
 */
stack_t pop(stack_t *head, char *line)
{
	stack_t *current;
	int current_data;

	if (head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		current = head;
		current_data = head->n;
		head = head->next;
		free(current);
	}
	return (head);
}
