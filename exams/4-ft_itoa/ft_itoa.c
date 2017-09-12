/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 12:47:01 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/24 08:51:29 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int nbr)
{
	int	tmp;
	int	len;
	int	neg;
	char	*str;

	tmp = nbr;
	len = 2;
	neg = (nbr < 0) ? 1 : 0;
	while (tmp /= 10)
		len++;
	len = len + neg;
	str = (char *)malloc(sizeof(char) * len);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = ft_abs(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
