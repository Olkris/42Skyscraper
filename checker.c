
#include <unistd.h>
#include <stdbool.h>

bool	checker(int matrix[4][4], int visibility[16])
{
	int	i;
	int number;
	int *line[4];

	i = 0;
	while (i < 16)
	{
		line_reader(line, matrix, i);
		if (visibility[i] == count_visible(line))
			print_result(matrix);
			return (0) ;
		else
			return (1) ;
	}
}

int	count_visible(int line[4])
{
	int i;
	int height;
	int max_height;
	int visible_count;

	i = 0;
	max_height = 0;
	visible_count = 0;
	while (i < 4)
	{
		height = line[i];
		if (height > max_height)
		{
			visible_count += 1;
			max_height = height;
		}
		i++;
	}
	return (visible_count);
}

void	line_reader(int matrix[4][4], int number, bool is_col, bool is_reverse)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (i / 4 == 0)
		{
			line[i] = matrix[i][number];
		}
		else if (i / 4 == 1)
		{
			line[i] = matrix[number][i];
		}
		else if (i / 4 == 2)
		{
			line[i] = matrix[3 - i][number];
		}
		else if (i / 4 == 3)
		{
			line[i] = matrix[number][3 - i];
		}
		i++;
	}
}

{

}

int main(void)
{
	int	matrix[4][4] = {
		{1, 2, 3, 4},
		{1, 2, 3, 4},
		{1, 2, 3, 4},
		{1, 2, 3, 4}
	};

	int visibility[16] = {1, 2, 3, 4, 4, 3, 2, 1, 1, 2, 3, 4, 4, 3, 2, 1};

	checker(matrix, visibility);
}
