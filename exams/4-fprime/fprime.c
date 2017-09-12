/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 08:59:14 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/24 08:46:31 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	long	i;
	long	n;

	i = 2;
	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		else
		{
			while (i <= n)
			{
				while (n % i == 0)
				{
					n = n / i;
					printf("%ld", i);
					if (i <= n)
						printf("*");
				}
				i++;
			}
		}
	}
	printf("\n");
	return (0);
}
