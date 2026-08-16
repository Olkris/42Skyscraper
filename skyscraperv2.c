
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error();
		return (1);
	}
}
*int	parse_args()

char	print_result(int *result);

char	print_error(void)
{
	write(1, "Error\n", 6)
}
