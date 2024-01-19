#include "monty.h"
/**
 * exe_nop - excecute no operation on the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_nop(stack_t **stack __attribute__((unused)),
		unsigned int line_number __attribute__((unused)))
{
}

/**
 * exe_add - excecute add operation using top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_add(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_add(stack);
}

/**
 * exe_sub - execute subtract operation using top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_sub(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_sub(stack);
}

/**
 * exe_div - execute divide operation using top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_div(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (stack_top(stack) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_div(stack);
}

/**
 * exe_mod - execute modulos operation using top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_mod(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (stack_top(stack) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
	}
	stack_mod(stack);
}
