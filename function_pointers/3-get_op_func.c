#include "3-calc.h"
/**
 * get_op_func - Selects the corresponding operation function based on the operator.
 *
 * @s: The operator as a string.
 *
 * Return: A pointer to the corresponding operation function.
 *         Returns NULL if the operator is not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
		i++;
	if (ops[i].op == NULL)
		return (NULL);
	return (ops[i].f);

}
