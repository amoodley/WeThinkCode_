/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:24:30 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/08 16:39:02 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int		a1;
	int		a2;
	int		i;

	if (ac == 3)
	{
		a1 = atoi(av[1]);
		a2 = atoi(av[2]);
		i = (a1 < a2 ? a1 : a2) / 2;
		while (i > 0)
		{
			if ((a1 % i == 0) && (a2 % i == 0))
				break ;
			i--;
		}
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
