/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:39:07 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/21 11:11:30 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	check_grid(int	*m)	
{
	int	i;
	int	j;
	int k;

	k = 0;
	i = 0;
	while(i < 10)
	{
		j = i;
		while(j < 10)
		{
			if(m[j] == j + 1)
				return (-1);
			j++;
		}
		k += m[i];
		i++;
	}
	if(k < 45)
		return (-1);
	// diagonal
	return 0;
}


int	back_track()
{
	int	p[2];
		
	p[0] = 0;
	
}

int	ft_ten_queens(void)
{
	int	m[10];
	int	i;

	i = 0;
	while(i < 10)
	{
		m[i] = -1;
	}
	return 0;
}

int main(void)
{
	ft_ten_queens();
	return 0;
}
*/
