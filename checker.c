
#include <unistd.lib>

bool	checker(int matrix[4][4], int visibility[16])
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
