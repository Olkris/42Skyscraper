
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error();
		return (1);
	}
	else
	{
		parse_args(argv[1])
	}
}

*int	parse_args(char *arguments)
{
	
}

char	print_result(int *result);

char	print_error(void)
{
	write(1, "Error\n", 6)
}
