#include "monty.h"
/**
 *
 * swap_opc - swaps the top two elements ofthe stack
 * @stack: head of the node
 * @line_number: number of node
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number);
{
	stack_t *stay;
	stack_t *move;

	stay = stack;
	move = stack->next;

	if (stack->next = NULL)
	{
		printf("L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	else:
	{
	pop(move);
	push(move);
	}
}


/**
 *
 * add_opc - adds the top two elements of the stack
 *
 * @stack: head of node
 * @line_number: number of nodes
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number);
{
	int i, j;
	stack_t *first;
	stack_t *second;

	if (stack->next = NULL)
	{
		printf("L%d: can't add, stack too short", line_number)
			exit(EXIT_FAILURE);
	}

	push(first);
	push(second);
	i = pop(first);
	j = pop(second);
	push(i + j);
}

/**
 *
 * nop - opcode nop doesn't do anything
 *
 * Return: void
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	return (0);
}
