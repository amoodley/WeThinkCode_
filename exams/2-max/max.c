/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:35:39 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:35:40 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int		cmp;

	i = 0;
	cmp = tab[0];
	while (i < len)
	{
		if (cmp < tab[i])
			cmp = tab[i];
		i++;
	}
	if (i == len)
		return (cmp);
	return (0);
}

int	main(void)
{
	int	table[6] = {1, 3, 46, 18, 23, 75};

	printf("%d\n", max(table, 6))	;
	return (0);
}
