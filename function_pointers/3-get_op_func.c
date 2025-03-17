#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };


	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (0);
}
