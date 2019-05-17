#ifndef MONTY_H_
#define MONTY_H_
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
  int n;
  struct stack_s *prev;
  struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
  char *opcode;
  void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


int main(int argc, char *argv[]);
void push_opc(stack_t **stack, unsigned int line_number);
void pall_opc(stack_t **stack, unsigned int line_number);
void nop_opc (stack_t **stack, unsigned int line_number);
void swap_opc(stack_t **stack, unsigned int line_number);
void pop_opc(stack_t **stack, unsigned int line_number);
void add_opc(stack_t **stack, unsigned int line_number);

#endif
