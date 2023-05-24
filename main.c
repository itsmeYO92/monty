#include "monty.h"

int main(int ac, char **av)
{
	arguments_t *args = malloc(sizeof(arguments_t));

	init_args(args, ac, av);
	precheck_args(args);
	compile_file(args);
	printf("done");
	free(args->buffer);
	fclose(args->source);
	free(args);
	return (EXIT_SUCCESS);
}
