/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:41:20 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/22 16:34:18 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	sqrt;

	i = 1;
	sqrt = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2 && i < 46340)
	{
		sqrt = i * i;
		if (sqrt == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

/*int main()
{
	printf("%d \n", ft_sqrt(2147483647));
	return 0;
}*/
