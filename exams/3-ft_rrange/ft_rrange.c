/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 14:37:34 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/08 14:10:53 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*range;
	int		len;

	len = (end >= start) ? end - start + 1 : start - end + 1;
	if (!(range = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	while (len)
	{
		len--;
		range[len] = (end >= start) ? start++ : start--;
	}
	return (range);
}
