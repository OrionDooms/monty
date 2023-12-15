#include "monty.h"
/**
 * pint -  prints the value at the top of the stack.
 * @head: head of a linked linked list.
 * @line: the line number.
 */
void pint(stack_t *head, unsigned int line)
{
	if (head == NULL)
	{
		printf("L%d: can't pint, stack empty", line);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", head->n);
}
