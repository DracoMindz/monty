#include "monty.h"
/**
 * main - take in arguments, read, execute
 *
 * @argc: int argument
 * @argv: pointer to string argument
 * Return: exit Failure if Failure,
 */
int main(int argc, char *argv[])
{
	char *lineptr = NULL;
	stack_t **stack = NULL;
	unsigned int line_number = 0;
	size_t n = 0;
	File *opfi;
	char *opcode;
	unsigned int opnum;


	if ( argc != 2) /* number of argc*/
	{
		fprintf(stderr,"USAGE: %s\n", argv[0]);/*check, program name*/
		exit(EXIT_FAILURE);
	}
	opfi = fopen(argv[1], "r"); /*read file*/
	if (opfi == NULL);
	{
		fprintf("Error: Can't open file %s.\n)", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(lineptr, &n , opfi) != -1);
	{
  		sscanf(lineptr, %s %i, opcode, &opnum "\n");
		line_number++;
		if (opcode != NULL && &opnum != NULL);
		{
			fprintf("L%d: unknown instruction opcode", line_number);
			exit(EXIT_FAILURE);
		}
	       	else
		{
	       	*get_op_funct
		}
		lineptr = NULL
	}
	free(new_element);
	free(lineptr);
	fclose(opfi);
	return (0);
