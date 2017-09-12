/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoodley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 10:02:16 by amoodley          #+#    #+#             */
/*   Updated: 2017/08/24 10:02:22 by amoodley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int row_find_king(char **board ,int n)
{
	int i = 1;
	int j = 0; 

	while (i < n)
	{	
		while (j < n)
		{
			if (board[i][j] == 'K')
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (-1);
}

int col_find_king(char **board, int n)
{
	int i = 1;
	int j = 0; 

	while (i < n)
	{   
		while (j < n)
		{
			if (board[i][j] == 'K')
				return (j);
			j++;
		}
		j = 0;
		i++;
	}
	return (-1);
}

int check_rook(char **board , int n)
{	

	int ki = row_find_king (board , n);
	int kj = col_find_king (board, n);

	int index1 = ki;
	int index2 = kj;

	while (index1 > 0)
	{
		if (board[index1][kj] == 'P' || board[index1][kj] == 'B')
			return (0);
		if (board[index1][kj] == 'R' || board[index1][kj] == 'Q')
			return (1);
		index1--;
	}

	index1 = ki;
	while (index1 < n)
	{
		if (board[index1][kj] == 'P' || board[index1][kj] == 'B')
			return (0);
		if (board[index1][kj] == 'R' || board[index1][kj] == 'Q')
			return (1);
		index1++;
	}   

	while (index2 >= 0)
	{
		if (board[ki][index2] == 'P' || board[ki][index2] == 'B')
			return (0);
		if (board[ki][index2] == 'R' || board[ki][index2] == 'Q')
			return (1);
		index2--;
	}   
	index2 = kj;
	while (index2 <= n-1)
	{
		if (board[ki][index2] == 'P' || board[ki][index2] == 'B')
			return (0);
		if (board[ki][index2] == 'R' || board[ki][index2] == 'Q')
			return (1);
		index2++;
	}   
	return 0; 
}

int check_pawn(char **board, int n)
{
	int ki = row_find_king (board , n);
	int kj = col_find_king (board, n);

	if (ki == n - 1) 
		return (0);

	if (kj == n-1)
	{
		if (board[ki + 1][kj - 1] == 'P')
		{
			return (1);
		}
		return (0);
	}

	if (kj == 0)
	{
		if (board[ki + 1][kj + 1] == 'P')
		{
			return (1);
		}
		return (0);
	}

	else 
	{
		if (board[ki + 1][kj + 1] == 'P' || board[ki + 1][kj - 1] == 'P')
			return (1);
	}
	return (0);
}


int check_bishop(char **board, int n)
{
	int ki = row_find_king (board , n);
	int kj = col_find_king (board, n);

	int index1 = ki;
	int index2 = kj;

	while (index1 > 0 && index2 >=0)
	{
		if (board[index1][index2] == 'R' || board[index1][index2] == 'P')
			return (0);
		if (board[index1][index2] == 'B' || board[index1][index2] == 'Q')
			return (1);
		index1--;
		index2--;
	}
	index1 = ki;
	index2 = kj;
	while (index1 > 0 && index2 <= n-1)
	{
		if (board[index1][index2] == 'R' || board[index1][index2] == 'P')
			return (0);
		if (board[index1][index2] == 'B' || board[index1][index2] == 'Q')
			return (1);
		index1--;
		index2++;
	}
	index1 = ki;
	index2 = kj;
	while (index1 <= n-1 && index2 <= n-1) 
	{
		if (board[index1][index2] == 'R' || board[index1][index2] == 'P')
			return (0);
		if (board[index1][index2] == 'B' || board[index1][index2] == 'Q')
			return (1);
		index1++;
		index2++;
	}
	index1 = ki;
	index2 = kj;
	while (index1 <= n-1 && index2 >= 0)
	{
		if (board[index1][index2] == 'R' || board[index1][index2] == 'P')
			return (0);
		if (board[index1][index2] == 'B' || board[index1][index2] == 'Q')
			return (1);
		index1++;
		index2--;
	}
	return (0);

}

int ft_ischeck(char **board, int n)
{
	return check_pawn(board, n) || check_rook(board, n) || check_bishop(board,n);
}


int main(int argc, char **argv) 
{
	if (argc > 1)
	{
		if( ft_ischeck(argv, argc))
			write(1, "Success",7);
		else
			write(1, "Fail",4);
	}
	write(1, "\n",1);
	return (0);
}
