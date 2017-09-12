/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:36:09 by amoodley          #+#    #+#             */
/*   Updated: 2017/07/31 12:52:26 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;
	int	sp;
	char	*str;

	if (ac == 2)
	{
		i = 0;
		sp = -1;
		str = av[1];
		while (str[i])
		{
			if (str[i] != ' ' && str[i] != '\t')
			{
				if (sp == 1)
					ft_putchar(' ');
				sp = 0;
				ft_putchar(str[i]);
			}
			else if (sp == 0)
				sp = 1;
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
