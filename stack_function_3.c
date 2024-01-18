#include "monty.h"

/**
 * stack_mul - Multiply top two elements
 * @head: pointer to head node
 *
 */
void stack_mul(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n * (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * stack_div - Divide second top element by first top element of the stack.
 * @head: pointer to head node
 *
 */
void stack_div(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n / (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * stack_mod - Modulus second top element by first top element of the stack.
 * @head: pointer to head node.
 *
 */
void stack_mod(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	((*head)->next)->n = ((*head)->next)->n % (*head)->n;
	*head = (*head)->next;
	free(temp);
}

/**
 * stack_pchar - Prints the char at the top of the stack.
 * @head: pointer to the head node.
 *
 */
void stack_pchar(stack_t **head)
{
	printf("%c\n", (char) (*head)->n);
}

/**
 * stack_pstr - Prints the string starting at the top of the stack.
 * @head: pointer to the head node.
 *
 */
void stack_pstr(stack_t **head)
{
	stack_t *i = *head;

	if (i == NULL)
		printf("\n");
	else
	{
		for (i = *head; i != NULL; i = i->next)
		{
			if (i->n == 0)
				break;
			if (i->n < 32 || i->n > 127)
				break;
			printf("%c", (char) i->n);
		}
		printf("\n");
	}
}
