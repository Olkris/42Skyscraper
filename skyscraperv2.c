#include <unistd.h>
#include <stdio.h>

/*
 * Display an error message.
 */
void	print_error(char *message)
{
	write(1, message, 40);
}

/*
 * Check the input and fill the numbers array.
 *
 * The input must contain:
 * - Numbers from 1 to 4
 * - Exactly 16 numbers
 * - Spaces between the numbers
 */
int	parse_args(char *arguments, int *numbers)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arguments[i] != '\0')
	{
		/* Check if the character is between 1 and 4 */
		if (arguments[i] >= '1' && arguments[i] <= '4')
			count++;

		/* Spaces are allowed */
		else if (arguments[i] != ' ')
		{
			printf("Error: numbers must be between 1 and 4\n");
			return (1);
		}
		i++;
	}

	/* Check if we have exactly 16 numbers */
	if (count != 16)
	{
		printf("Error: need exactly 16 numbers\n");
		return (1);
	}

	/*
	 * Convert each character from char to int.
	 * i * 2 skips the spaces.
	 */
	i = 0;
	while (i < 16)
	{
		numbers[i] = arguments[i * 2] - '0';
		i++;
	}

	return (0);
}

int	main(int argc, char *argv[])
{
	int	numbers[16];
	int	i;

	/* Check that there is exactly one argument */
	if (argc != 2)
	{
		printf("Error: enter exactly 16 numbers\n");
		return (1);
	}

	/* Check input and fill the array */
	if (parse_args(argv[1], numbers) != 0)
		return (1);

	/* Display the original input */
	printf("Input: %s\n", argv[1]);

	/* Display all numbers */
	i = 0;
	while (i < 16)
	{
		printf("Number %d: %d\n", i, numbers[i]);
		i++;
	}

	return (0);
}
// char	print_result(int *result);

