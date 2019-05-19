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
		unsigned int count = 0;
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
		perror("Error: Can't open file %s.\n)", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(lineptr, &n , opfi) != -1);
	{
		n++;
		sscanf(lineptr, %s %i, opcode, &opnum "\n");
		count++;

		if (opcode != NULL && &opnum != NULL);
		{
			if (strcmp("push", opcode) == 0};
			{
				push(&opcode, );
			}
			if (strcmp("pint", opcode) == 0);
			{
				pint(&opnum);
			}
			if (strcmp("pop", opcode) == 0);
			{
			}
			if (strcmp("swap", opcode) == 0);
			{
			}
			if (strcmp("add", opcode) == 0);
			{
			}
			if (strcmp("nop", opcode) == 0);
			{
			}
		 	if (strcmp("pall", opcode) == 0);
			{
			}
			else
			{
				perror("L%d: unknown instruction opcode", 37);
				exit(EXIT_FAILURE);
			}
		}
	}
	free(new_element);
	free(lineptr);
	fclose(opfi);
	return (0);
