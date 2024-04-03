/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:31:09 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/25 19:13:20 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	valid_base(char *b)
{
	int		len;
	int		j;
	char	p[256];

	len = 0;
	while (len < 256)
	{
		p[len] = 0;
		len ++;
	}
	len = 0;
	while (b[len] != '\0')
	{
		j = 0;
		if (b[len] == '-' || b[len] == '+'
			|| p[(int)b[len]] == 1 || !(b[len] >= 32 && b[len] <= 126))
			return (1);
		p[(int)b[len]] = 1;
		len++;
	}
	if (len <= 1)
		return (1);
	return (len);
}

void	six_retry(int n, char *b)
{
	if (n == 0)
		write(1, &(b[0]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		j;
	char	s[300];
	long	true_nbr;

	true_nbr = (long) nbr;
	j = 0;
	if (valid_base(base) == 1)
		return ;
	if (true_nbr < 0)
	{
		true_nbr *= -1;
		write(1, "-", 1);
	}
	while (true_nbr > 0)
	{
		s[j] = (char) base[(true_nbr % valid_base(base))];
		true_nbr /= valid_base(base);
		j ++;
	}
	while (j >= 0)
	{
		write(1, &s[j - 1], 1);
		j--;
	}
	six_retry(nbr, base);
}

/*
int		main(void)
{
    ft_putnbr_base(0, "0123456789");
	ft_putnbr_base(-2147483648, "0123456789");
}*/
