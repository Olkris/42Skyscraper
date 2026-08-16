
#include <unistd.lib>

bool	checker(int matrix[4][4], int visibility[16])
{
	int	i = 0;
	int col;
	int row;

	while (i < 16)
	{
		col = 0;
		matrix[]
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


array[i] = atoi(argv[1][i*2])

int[4]	line_reader(int matrix[4][4], int )
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

	vis_checker(matrix, visibility);
}
