 #include "monty.h"
/**
 * push - pushes element to the stack
 * @stack: pointer to a const list
 * @line_number: line number of the stack
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)

{
	stack_t *new_element;

	if (line_number == NULL);
	{
		perror("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (isalpha(line_number) != 0 || ispunct(line_number)!= 0);
	{
		perror("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	new_element = malloc(sizeof(stack_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->next = *stack;
	new_element->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new_element;
	*stack = new_element;
	new_element->n = n;
	return (new_element);
}

{/**
 * pall - prints all the elements of a stack
 * @stack: stack
 *
 * Description: prints all the elements of the stack
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;
        stack_t *list;

	list = stack;

	(void)line_number;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		i++;
		list = list->next;
	}
}
/**
 * pint - prints the value from at top of stack
 *@stack: top of Stack
 *
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;
        stack_t *list;

	list = stack;

	(void)line_number;

	if (*head == NULL);
	{
		perror("L%d: can't pint, stack empty",line_number);
		exit(EXIT_FAILURE);
	}
	while (list != NULL)
	{
		printf("%d\n", list);
	}
}

/**
 * pop - function removes the top element of the stack
 *@stack: stack
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *go;
	unsigned int x;

	if (stack == NULL || *stack == NULL)
	{
		perror("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	go = *stack;
	x = go->n;
	*stack = go->next;
	free(go);
}
