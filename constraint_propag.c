/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint_propag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalea <abalea@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:50:38 by abalea            #+#    #+#             */
/*   Updated: 2026/08/15 20:01:40 by abalea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**int	constraint_propag(*int matrix)
{
		
}
*/

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char *argv[]);

char	matrix_printer(void);

int	matrix_creator(int array);
{
	char	table[4][4];
	int		row;
	int		col;
	int		i;

	if (argc != 17)
	{
		print_error();
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		row = (i - 1) / 4;
		col = (i - 1) % 4;
		table[row][col] = *argv[i];
		i++;
	}
	write(1, &table[2][2], 1);
	constraint_propag(int);
}
