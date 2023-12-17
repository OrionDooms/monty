#include "monty.h"
/**
 * my_pall - prints all the elements of the stack.
 * @head: head of the linked list.
 * Return: 0 (success).
 */
int my_pall(stack_t *head)
{
	stack_t *current = head;
	int i = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
