/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:49:22 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/16 18:49:25 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int number)
{
	char	c;

	c = number + '0';
	write(1, &c, 1);
}

void	print_result(int result[16])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_putnbr(result[i]);
		if (i % 4 == 3)
			ft_putstr("\n");
		else
			ft_putstr(" ");
		i++;
	}
}
