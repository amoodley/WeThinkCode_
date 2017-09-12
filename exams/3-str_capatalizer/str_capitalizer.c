/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:01:23 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/10 09:01:25 by amoodley         ###   ########.fr       */
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
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			ft_putchar(str[i]);
			i++;
		}
		if (!str[i])
			return (0);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ft_putchar(str[i] - 32);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	return (0);
}

int		main(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	n = ac;
	if (n > 1)
	{
		while (i < n)
		{
			ft_check(av[i]);
			i++;
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
