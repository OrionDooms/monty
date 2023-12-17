#include "monty.h"
#include <ctype.h>
/**
 * my_push - pushes an element to the stack.
 * @head: head of a linked list.
 * @data: is an integer.
 * Return: a linked list.
 */
stack_t my_push(stack_t **head, int data)
{
	stack_t *h, *new_node = malloc(sizeof(stack_t));

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = data;
		*head = new_node;
		return (**head);
	}
	else
	{
		h = *head;
		new_node->n = data;
		new_node->prev = NULL;
		new_node->next = *head;
		h->prev = new_node;
		*head = new_node;
		return (**head);
	}
}
