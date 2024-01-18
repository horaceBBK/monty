#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809l
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>

extern char *extern_param;

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t

/**
 * struct func_s - function
 * @name: the name of function
 * @function: pointer to the function
 *
 */
typedf struct func_s
{
	char *name;
	void (*function)(stack_t **stack, unsigned int line_number);
} func_t


int stack_is_empty(stack_t **head);
int stack_top(stack_t **head);
int stack_size(stack_t **head);
int stack_pop(stack_t **head);
void stack_push(stack_t);
void stack_pall(stack_t **head);
void stack_free(stack_t **head)

void stack_add(stack_t **head);
void stack_swap(stack_t **head);
void stack_sub(stack_t **head);
void stack_mul(stack_t **head);
void stack_div(stack_t **head);
void stack_mod(stack_t **head);
void stack_pchar(stack_t **head);
void stack_pstr(stack_t **head);
void stack_rotl(stack_t **head);
void stack_rotr(stack_t **head);

void exe_push(stack_t **head, unsigned int line_number);
void exe_pop(stack_t **head, unsigned int line_number);
void exe_pall(stack_t **head, unsigned int line_number);
void exe_pint(stack_t **head, unsigned int line_number);

void exe_add(stack_t **stack, unsigned int line_number);
void exe_swap(stack_t **stack, unsigned int line_number);
void exe_sub(stack_t **stack, unsigned int line_number);
void exe_mul(stack_t **stack, unsigned int line_number);
void exe_div(stack_t **stack, unsigned int line_number);
void exe_mod(stack_t **stack, unsigned int line_number);
void exe_pchar(stack_t **stack, unsigned int line_number);
void exe_pstr(stack_t **stack, unsigned int line_number);
void exe_rotr(stack_t **stack, unsigned int line_number);
void exe_rotl(stack_t **stack, unsigned int line_number);

void (*get_exe_function(char *cmd, unsigned int ln))(stack_t **, unsigned int);

#endif
