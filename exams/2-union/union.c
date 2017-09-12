/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:40:00 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:40:03 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strncmp(char *str, char c, int i)
{
	i = i - 1;
	while (i >= 0)
	{
		if (str[i] == c)
			return (1);
		i--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!ft_strncmp(av[1], av[1][i], i))
				ft_putchar(av[1][i]);
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (!ft_strcmp(av[1], av[2][i]) &&
				!ft_strncmp(av[2], av[2][i], i))
				ft_putchar(av[2][i]);
			i++;
		}

	}
	ft_putchar('\n');
}
