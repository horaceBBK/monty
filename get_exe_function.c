#include "monty.h"
/**
 * get_exe_function - get the operation function to be executed
 * @cmd: operation command
 * @ln: line number
 * Return: function for operation
 */
void (*get_exe_function(char *cmd, unsigned int ln))(stack_t **, unsigned int)
{
	func_t dict[] = {
		{"push", exe_push},
		{"pop", exe_pop},
		{"pall", exe_pall},
		{"pint", exe_pint},
		{"swap", exe_swap},
		{"add", exe_add},
		{"sub", exe_sub},
		{"mul", exe_mul},
		{"div", exe_div},
		{"mod", exe_mod},
		{"#", exe_nop},
		{"nop", exe_nop},
		{"pchar", exe_pchar},
		{"pstr", exe_pstr},
		{"rotl", exe_rotl},
		{"rotr", exe_rotr},
	};
	int c;

	for (c = 0; c < 16; c++)
	{
		if (cmd == NULL)
			break;
		if (strcmp(dict[i].name, cmd) == 0)
			return (dic[i].function);
	}
	fprint(stderr, "L%d: unknown instruction %s\n", ln, cmd);
	exit(EXIT_FAILURE);
}
