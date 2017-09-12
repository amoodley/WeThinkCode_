/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 14:08:18 by amoodley          #+#    #+#             */
/*   Updated: 2017/07/27 14:18:09 by amoodley         ###   ########.fr       */
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
	char	*str;

	i = 0;
	if (ac == 2)
	{
		str = av[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				while (str[i] == ' ' || str[i] == '\t')
					i++;
				if (str[i])
				{
					ft_putchar(' ');
					ft_putchar(' ');
					ft_putchar(' ');
				}
			}
			else
			{
				ft_putchar(str[i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
