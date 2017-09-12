/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 15:05:47 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 12:24:58 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*range;
	int		i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end));
	else
		range = (int *)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		range[i] = start;
		if (start > end)
			start = start + -1;
		else
			start = start + 1;
		i++;
	}
	range[i] = start;
	return (range);
}
