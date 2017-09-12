/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:35:21 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:35:22 by amoodley         ###   ########.fr       */
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

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
			i++;
		i = i -1;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
			i--;
		i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
