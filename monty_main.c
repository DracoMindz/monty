#include "monty.h"
/**
 * main - take in arguments, read, execute
 * @argc: int argument
 * @argv: pointer to string argument
 * Return: exit Failure if Failure,
 */
int main(int argc, char *argv[])
{
	char *lineptr = NULL, *opcode;
	stack_t **stack = NULL;
	unsigned int line_number = 0, opnum;
	size_t n = 0;
	File *opfi;

	if (argc != 2) /* number of argc*/
	{
		fprintf(stderr, "USAGE: %s\n", argv[0]);/*check, program name*/
		exit(EXIT_FAILURE);
	}
	opfi = fopen(argv[1], "r"); /*read file*/
	if (opfi == NULL)
	{
		fprintf("Error: Can't open file %s.\n)", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(lineptr, &n, opfi) != -1)
	{
		sscanf(lineptr, % s % i, opcode, &opnum);
		line_number++;
		if (n < 0)
		{
			free(opcode);
			free(&opnum);
		}
		if (opcode != NULL && &opnum != NULL)
		{
			fprintf("L%d: unknown instruction opcode", line_number);
			exit(EXIT_FAILURE);
		}
		else
		{
			(*get_op_func(opcode, &opnum))(stack_t **stack, unsigned int line_number);
		}
		lineptr = NULL;
	}
	free(lineptr);
	fclose(opfi);
	return (0);
}

/**
 * get_op_func - function calls functions
 *
 * @opcode: chraracter string passed from main
 * @opnum: unsigned int passed from main
 *
 * Return: NULL
 */
void *get_op_func(opcode, opnum)
{
	instruct_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
