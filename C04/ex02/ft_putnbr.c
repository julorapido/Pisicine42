/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:09:59 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/21 09:30:21 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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

/*int main()
{
	ft_putnbr(-11);
}*/
