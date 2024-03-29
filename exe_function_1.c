#include "monty.h"

/**
 * exe_push - push operation
 * @stack: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_push(stack_t **stack, unsigned int line_number)
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
 * @stack: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_pop(stack_t **stack, unsigned int line_number)
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
 * @stack: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_pall(stack_t **stack,
	      unsigned int line_number __attribute__((unused)))
{
	if (!stack_is_empty(stack))
	stack_pall(stack);
}

/**
 * exe_pint - print int operation
 * @stack: pointer to stack head
 * @line_number: operation line number
 *
 */
void exe_pint(stack_t **stack, unsigned int line_number)
{
	if (stack_is_empty(stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack_top(stack));
}

/**
 * exe_swap - swaps the top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_swap(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_swap(stack);
}
