/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:40:44 by amoodley          #+#    #+#             */
/*   Updated: 2017/07/07 16:18:25 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	a1;
	int	a3;
	int	res;

	res = 0;
	if (ac == 4)
	{
		if (av[2][1] == '\0')
		{
			a1 = atoi(av[1]);
			a3 = atoi(av[3]);
			if (av[2][0] == '+')
				res = a1 + a3;
			else if (av[2][0] == '-')
				res = a1 - a3;
			else if (av[2][0] == '/')
				res = a1 / a3;
			else if (av[2][0] == '*')
				res = a1 * a3;
			else if (av[2][0] == '%')
				res = a1 % a3;
			printf("%i", res);
		}
	}
	ft_putchar('\n');
	return (0);
}
