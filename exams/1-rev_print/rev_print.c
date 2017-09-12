/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 09:36:56 by amoodley          #+#    #+#             */
/*   Updated: 2017/07/04 09:51:53 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;
		while (i >= 0)
		{
			ft_putchar(av[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
