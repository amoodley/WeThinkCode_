/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/25 12:31:13 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/29 16:39:25 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			if (!len)
				while (str[i] && !is_space(str[i++]))
					len++;
			else
			{
				while (str[i] && !is_space(str[i]))
					ft_putchar(str[i++]);
				ft_putchar(' ');
			}
		}
	}
	i = 0;
	while (is_space(str[i]))
		i++;
	while (len--)
		ft_putchar(str[i++]);
}

int	main(int ac, char **av)
{

	if (ac > 1)
		rostring(av[1]);
	ft_putchar('\n');
	return (0);
}
