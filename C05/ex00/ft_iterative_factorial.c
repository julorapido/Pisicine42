/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:51:33 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/22 16:37:29 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	if (nb <= 0)
		return (0);
	r = 1;
	i = 1;
	while (i < nb + 1)
	{
		r *= i;
		i++;
	}
	return (r);
}

/*int main()
{
	printf("%d \n", ft_iterative_factorial(12));
	return 0;
}*/
