/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 11:21:53 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/11 14:43:58 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rev_wstr(char *str, int n)
{
	int		i;
	int		start;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!str[i])
			return (0);
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		rev_wstr(&str[i], 0);
		write(1, &str[start], i - start);
		if (!n)
			ft_putchar(' ');
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1], 1);
	ft_putchar('\n');
	return (0);
}
