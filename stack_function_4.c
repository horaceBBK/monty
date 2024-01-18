#include "monty.h"
/**
 * stack_rotl - Rotates a stack to the top of the stack.
 * @head: pointer to the head node.
 *
 */
void stack_rotl(stack_t **head)
{
	stack_t *temp = *head;
	stack_t *i;

	if (!is_empty(head))
	{
		if (temp->next != NULL)
		{
			*head = temp->next;
			temp->next = NULL;
			for (i = *head; i->next != NULL; i = i->next)
				continue;
			i->next = temp;
		}
	}
}

/**
 * stack_rotr - Rotates a stack to the bottom of the stack.
 * @head: pointer to the head node.
 *
 */
void stack_rotr(stack_t **head)
{
	stack_t *top = *head;
	stack_t *i;

	if (!is_empty(head))
	{
		if (top->next != NULL)
		{
			*head = top->next;
			top->next = NULL;
			for (i = *head; i->next != NULL; i = i->next)
				continue;
			i->next = top;
		}
	}
}
