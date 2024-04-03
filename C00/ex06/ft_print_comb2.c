/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:12:32 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/09 11:50:36 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_arr(int *ar, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		write(1, &ar[i], 1);
		if (i == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int		r[4];
	int		i;
	int		d;

	i = 0;
	while (i < 99)
	{	
		d = (i - (10 * (i / 10)));
		r[0] = 48 + (i / 10);
		r[1] = 48 + d;
		r[2] = '0';
		while (r[2] <= '9')
		{
			r[3] = '0';
			if (r[2] == '0')
				r[3] = '0' + (d) + 1;
			while (r[3] <= '9')
			{
				write_arr((&r[0]), 4);
				r[3]++;
			}
			r[2]++;
		}
		i++;
	}
}

/*int main()
{
	ft_print_comb2();
	return 0;
}*/
