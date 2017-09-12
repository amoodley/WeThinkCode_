/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:00:46 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/10 09:00:51 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i + 1] == '\0' || str[i + 1] == ' ') 
				&& (str[i] >= 'A' && str[i] <= 'Z'))
			ft_putchar(str[i]);
		else if ((str[i + 1] == '\0' || str[i + 1] == ' ') 
				&& (str[i] >= 'a' && str[i] <= 'z'))
			ft_putchar(str[i] - 32);
		else if (str[i + 1] != ' ' && (str[i] >= 'A' && str[i] <= 'Z'))
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_check(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
