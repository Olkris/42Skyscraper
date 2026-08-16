
#include <unistd.h>
#include <stdbool.h>

bool	checker(int matrix[4][4], int visibility[16])
{
	int	i;
	int number;
	int line[4];

	i = 0;
	while (i < 16)
	{
		number = i % 4;
		if (i / 4 == 0)
			&line = line_reader(matrix, number, true, false);
		else if (i / 4 == 1)
			&line = line_reader(matrix, number, true, true);
		else if (i / 4 == 2)
			&line = line_reader(matrix, number, false, false);
		else if (i / 4 == 3)
			&line = line_reader( matrix, number, false, true);
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

int*	line_reader(int matrix[4][4], int number, bool is_col, bool is_reverse)
{
	int i;
	int result[4];

	i = 0;
	while (i < 4)
	{
		if ((is_col == true) && (is_reverse == false))
		{
			result[i] = matrix[i][number];
		}
		else if ((is_col == false) && (is_reverse == false))
		{
			result[i] = matrix[number][i];
		}
		else if ((is_col == true) && (is_reverse == true))
		{
			result[i] = matrix[3 - i][number];
		}
		else if ((is_col == false) && (is_reverse == true))
		{
			result[i] = matrix[number][3 - i];
		}
		i++;
	}
	return (result);
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
