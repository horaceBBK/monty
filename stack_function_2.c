#include "monty.h"

/**
 * stack_pall - print all the elements in the stack from the top to bottom
 * @head: pointer to head node
 *
 */
void stack_pall(stack_t **head)
{
	stack_t *temp = *head;

	for (; temp != NULL; temp = temp->next)
		printf("%d\n", temp->n);
}

/**
 * stack_swap - Swap the top two elements of the stack
 * @head: pointer to head node
 *
 */
void stack_swap(stack_t **head)
{
	stack_t *temp;

	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next = *head;
	*head = temp;
}

/**
 * stack_add - Sum the top two elements
 * @head: pointer to head node
 *
 */
void stack_add(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n + (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * stack_sub - Difference the top two element
 * @head: pointer to head node
 *
 */
void stack_sub(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n - (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * stack_free - deallocates the memory spaces used by the stack
 * @head: pointer to head node
 *
 */
void stack_free(stack_t **head)
{
	stack_t *temp = *head;
	stack_t *next;

	for (; temp != NULL;)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
