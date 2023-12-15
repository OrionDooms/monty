#include "monty.h"
/**
 * pop -  removes the top element of the stack.
 * @head: head of a linked list.
 * @line: the line number.
 * Return: return a linked list;
 */
stack_t pop(stack_t *head, unsigned int line)
{
	stack_t *current;

	if (head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	else
	{
		current = head;
		head = head->next;
		free(current);
	}
	return (*head);

}
