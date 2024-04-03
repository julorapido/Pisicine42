/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:39:49 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/27 16:42:18 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	ch;

	n = (long) nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ch = (n % 10) + '0';
	write(1, &ch, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;	

	i = 0;
	while (par[i].size != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &(par[i].str[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		while (par[i].copy[j] != '\0')
		{
			write(1, &(par[i].copy[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
