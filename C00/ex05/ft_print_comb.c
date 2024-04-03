/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:29:44 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/09 11:02:20 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_tripl(char c, char b, char a)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	b;
	char	a;

	c = '0';
	while (c <= '9')
	{
		b = c + 1;
		while (b <= '9')
		{
			a = b + 1;
			while (a <= '9')
			{
				put_tripl(c, b, a);
				if (! (c == '7' && b == '8' && a == '9'))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				a++;
			}
			b++;
		}
		c++;
	}
}

/*int main()
{
	ft_print_comb();		
	return 0;
}*/
