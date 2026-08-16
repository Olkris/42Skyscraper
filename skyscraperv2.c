/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraperv2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iameskou <iameskou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:30:04 by iameskou          #+#    #+#             */
/*   Updated: 2026/08/16 18:48:59 by iameskou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

extern	void	print_result(int result[16]);
extern	void	ft_putstr(char *str);

int	check_input(char *arguments)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arguments[i])
	{
		if (arguments[i] >= '1' && arguments[i] <= '4')
			count++;
		else if (arguments[i] != ' ')
		{
			ft_putstr("Error\n");
			return (1);
		}
		i++;
	}
	if (count != 16)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

void	fill_numbers(char *arguments, int *numbers)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		numbers[i] = arguments[i * 2] - '0';
		i++;
	}
}

int	parse_args(char *arguments, int *numbers)
{
	if (check_input(arguments) != 0)
		return (1);
	fill_numbers(arguments, numbers);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	numbers[16];

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (parse_args(argv[1], numbers) != 0)
		return (1);
	print_result(numbers);
	return (0);
}
