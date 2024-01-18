#include "monty.h"

/**
 * exe_mul - execute multiply operation using top two elements of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_mul(stack_t **stack, unsigned int line_number)
{
	if (stack_size(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_mul(stack);
}

/**
 * exe_pchar - print the char at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_pchar(stack_t **stack, unsigned int line_number)
{
	if (is_empty(stack) == 1)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 32 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_pchar(stack);
}

/**
 * exe_pstr - prints the string starting at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_pstr(stack);
}

/**
 * exe_rotl - rotates the stack to the top
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_rotl(stack);
}

/**
 * exe_rotr - rotates the stack to the bottom
 * @stack: pointer to the head of the stack
 * @line_number: operation line number
 *
 */
void exe_rotr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_rotr(stack);
}
