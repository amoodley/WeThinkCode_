/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:09:53 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:10:04 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	char	bits[8];
	int	nb;
	int	i;
	char	z;

	nb = octet;
	i = 0;
	while (i < 8)
	{
		bits[i] = nb % 2;
		nb = nb / 2;
		i++;
	}
	while (i - 1 >= 0)
	{
		z = bits[i - 1] + 48;
		ft_putchar(z);
		i--;
	}
}
