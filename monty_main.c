#include "monty.h"
/**
 * main - take in arguments, read, execute
 *
 * Return: EXit Failure if Failure,
 */
int main(int argc, char *argv[])
{
	char *lineptr = NULL;
		char *token;
		size_t n = 0;
		File *opfi;


	if ( argc != 2) /* number of argc*/
	{
		printf(stderr,"USAGE: %s\n", argv[0]);/*check, program name*/
		exit (EXIT_FAILURE);
	}

	opfi = fopen(argv[1], "r"); /*read file*/
	if (opfi == NULL);
	{
		printf("Error: Can't open file %s.\n)", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(lineptr, n , opfi) != -1);
	{
		n++;
		token =	(strtok(lineptr,"\n"));

		if (token != NULL);
		{
			if (strcmp("push", token) == 0};
			{
			}
			if (strcmp("pint", token) == 0);
			{
			}
			if (strcmp("pop", token) == 0);
			{
			}
			if (strcmp("swap", token) == 0);
			{
			}
			if (strcmp("add", token) == 0);
			{
			}
			if (strcmp("nop", token) == 0);
			{
			}
			token = strtok(0, n); /*go through other tokens*/
		}
	}
	free(new_element);
	free(lineptr);
	fclose(opfi);
	return (0);
