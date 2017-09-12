/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 17:21:03 by amoodley          #+#    #+#             */
/*   Updated: 2017/07/26 17:34:05 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	num;

	num = (unsigned int)n;
	if (n < 0)
	{
		num = num * -1;
		ft_putchar('-');
	}
	else if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}

int	ft_atoi(const char *str)
{
	int		i;
	int		res;
	int		neg;

	i = 0;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	neg = (str[i] == '-' ? -1 : 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

int	ft_isprime(int nb)
{
	int		n;

	n = 2;
	while (n < nb)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

void	add_prime_sum(int nb)
{
	int		i;
	int		n;

	i = 0;
	n = 2;
	while (n <= nb)
	{
		if (ft_isprime(n))
			i = i + n;
		n++;
	}
	ft_putnbr(i);
}

int	main(int ac, char **av)
{
	int		n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		add_prime_sum(n);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
