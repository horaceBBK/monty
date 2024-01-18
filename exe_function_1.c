#include "monty.h"

/**
 * exe_push - push operation
 * @head: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_push(stack_t **head, unsigned int line_number)
{
	if (extern_param == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_push(stack, atoi(extern_param));
}

/**
 * exe_pop - pop operation
 * @head: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_pop(stack_t **head, unsigned int line_number)
{
	if (stack_is_empty(stack))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_pop(stack);
}

/**
 * exe_pall - print all operation
 * @head: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_pall(stack_t **head, unsigned int line_number __attribute__((unused)))
{
	if (!is_empty(stack))
	stack_pall(stack);
}

/**
 * exe_pint - print int operation
 * @head: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_pint(stack_t **head, unsigned int line_number)
{
	if (is_empty(stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", top(stack));
}

/**
 * exe_swap - swaps the top two elements of the stack
 * @head: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_swap(stack_t **head, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	swap(stack);
}
