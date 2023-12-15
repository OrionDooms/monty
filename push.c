#include "monty.h"
#include <ctype.h>
/**
 * my_push - pushes an element to the stack.
 * @head: head of a linked list.
 * @data: is an integer.
 * @line: line number.
 * Return: a linked list.
 */
stack_t my_push(stack_t *head, int data, unsigned int line)
{
	stack_t *new_node, *last;

	if (!data)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	new_node->n = data;
	new_node->next = NULL;
	if (head == NULL)
	{
		new_node->prev = NULL;
		head = new_node;
		return (*head);
	}
	last = head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return (*new_node);
}
