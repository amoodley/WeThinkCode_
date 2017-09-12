/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:34:01 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:34:03 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	n;
	char	temp;

	i = 0;
	n = ft_strlen(str) - 1;
	while (n > i)	
	{
		temp = str[i];
		str[i] = str[n];
		str[n] = temp;
		n--;
		i++;
	}
	return (str);
}
