/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:14:13 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/09 14:24:29 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_n_arr(int *ar, int size, int nv)
{
	int		n;

	n = size - 1;
	if (nv < 0)
		write(1, "-", 1);
	if (size > 0)
	{
		while (n >= 0)
		{
			write(1, &ar[n], 1);
			n--;
		}
	}
	else
	{
		write(1, "0", 1);
	}
}

void	ft_putnbr(int nb)
{
	int		n;
	int		c;
	int		z[10];
	int		nb_ref;

	nb_ref = nb;
	if (nb < 0)
		nb_ref = -1 * nb;
	c = 0;
	n = nb_ref;
	while (n > 0)
	{
		c++;
		n /= 10;
	}
	n = nb_ref;
	c = 0;
	while (n > 0)
	{
		z[c] = '0' + n % (10);
		n /= 10;
		c ++;
	}
	print_n_arr(&(z[0]), c, nb);
}

/*int main()
{
	int o =  -2147483647;
	ft_putnbr(o);
	ft_putnbr(-1);
	ft_putnbr(0);
	ft_putnbr(3459345);
	ft_putnbr(2147483647);
	return 0;

}*/
