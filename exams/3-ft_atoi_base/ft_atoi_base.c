/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:44:27 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/07 13:44:28 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	ft_inbase(char c, int base, char b)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= b && c <= (b + base - 10)));
}

static int	check_case(char *str, int base)
{
	int		i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'A' + base)
			return (1);
		if (str[i] >= 'a' && str[i] <= 'a' + base)
			return (0);
		i++;
	}
	return (1);
}

int		ft_atoi_base(char *str, int str_base)
{
	int		i;
	int		res;
	int		neg;
	char	b;

	i = 0;
	res = 0;
	if (str_base < 2)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == '\v')
		i++;
	neg = (str[i] == '-' ? -1 : 1);
	b = check_case(str, str_base) ? 'A' : 'a';
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_inbase(str[i], str_base, b))
	{
		if (str[i] - b >= 0)
			res = (res * str_base) + (str[i] - b + 10);
		else
			res = (res * str_base) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		printf("%i\n", ft_atoi_base(av[1], 16));
	}
	return (0);
}
