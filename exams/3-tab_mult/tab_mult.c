/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:01:46 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/10 09:01:48 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	res = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	neg = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
		res = (res * 10) + (*str++ - '0');
	return (res * neg);
}

void	ft_putnbr(int n)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		num = num * (-1);
		ft_putchar('-');
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			ft_putstr(" x ");
			ft_putnbr(n);
			ft_putstr(" = ");
			ft_putnbr(i * n);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
