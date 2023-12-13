#include "monty.h"

stack_t push(stack_t *head, int i, int line_number)
{
	stack_t *new_node;

	if (!isdigit(i) || i == NULL)
	{
		printf("L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	new_node->n = i;
	new_node->next = head;
	new_node->prev = NULL;
	if (head != NULL)
		head->prev = new_node;
	return (head);
}
