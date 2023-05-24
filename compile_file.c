#include "monty.h"


void compile_file(arguments_t *args)
{
	while (fgets(args->buffer, sizeof(args->buffer), args->source) != NULL)
	{
		printf("%s", args->buffer);
	}
}
