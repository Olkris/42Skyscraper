/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint_propag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalea <abalea@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:50:38 by abalea            #+#    #+#             */
/*   Updated: 2026/08/15 18:46:15 by abalea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**int	constraint_propag(*int matrix)
{
		
}
*/

int	main(int argc, char *argv[])
{
	char	table[4][4];
	int		row;
	int		col;
	int		i;

	i = 1;
	while (i < argc)
	{
		row = (i - 1) / 4;
		col = (i - 1) % 4;
		table[row][col] = *argv[i];
		i++;
	}
	write(1, &table[2][2], 1);
	/*constraint_propag(int);*/
}
