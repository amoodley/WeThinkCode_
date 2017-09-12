/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 07:55:40 by amoodley          #+#    #+#             */
/*   Updated: 2017/09/05 15:45:35 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		bracket_count(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
			count++;
		else if (str[i] == ')' || str[i] == ']' || str[i] == '}')
			count--;
		i++;
	}
	return (count);
}

int		brackets(char *str)
{
	int		i;
	int		count;
	char	arr[100];

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			arr[count] = str[i];
			count++;
		}
		else if (str[i] == ')')
		{
			if (arr[count - 1] == '(')
				count--;
		}
		else if (str[i] == ']')
		{
			if (arr[count - 1] == '[')
				count--;
		}
		else if (str[i] == '}')
		{
			if (arr[count - 1] == '{')
				count--;
		}
		i++;
	}
	return (count);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			if (bracket_count(av[i]) == 0)
			{
				if (brackets(av[i]) == 0)
					ft_putstr("OK\n");
				if (brackets(av[i]) != 0)
					ft_putstr("Error\n");
			}
			else
				ft_putstr("Error\n");
			i++;
		}
	}
	else
		ft_putstr("\n");
	return (0);
}
