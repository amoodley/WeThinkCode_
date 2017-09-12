/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:06:47 by amoodley          #+#    #+#             */
/*   Updated: 2017/07/04 09:12:42 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				n = av[1][i] - 64;
				while (n > 0)
				{
					ft_putchar(av[1][i]);
					n--;
				}
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				n = av[1][i] - 96;
				while (n > 0)
				{
					ft_putchar(av[1][i]);
					n--;
				}
			}
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
