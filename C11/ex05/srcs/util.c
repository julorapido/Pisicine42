/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 16:35:37 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 16:57:59 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "util.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	ft_str_is_alpha(char *str)
{
	int		r;
	int		i;
	int		p;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		p = (int) str[i];
		if ((p >= 65 && p <= 90) || (p >= 97 && p <= 122))
		{
			r++;
		}
		i++;
	}
	if (r == i || i == 0)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	r;

	r = 0;
	i = 0;
	m = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	if (m % 2 != 0)
		r *= -1;
	return (r);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
