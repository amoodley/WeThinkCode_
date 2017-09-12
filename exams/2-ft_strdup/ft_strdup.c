/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:33:41 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:33:42 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dst;
	int	i;

	i = ft_strlen(src);
	i++;
	dst = (char *)malloc(sizeof(char) * i);
	while (i >= 0)
	{
		dst[i] = src[i];
		i--;
	}
	return (dst);
}
