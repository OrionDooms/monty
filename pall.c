#include "monty.h"
/**
 * print_stact - prints all the elements of the stack.
 * @head: head of the linked list.
 */
void pall(stack_t *head)
{
	stack_t *current = head;

	if (head == NULL)
		printf("");
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
