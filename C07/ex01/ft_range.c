/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:23:37 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/26 16:07:25 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *) malloc(sizeof(int) * (max - min));
	if (!tab || min >= max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
int	main(void)
{
	int *range;

	range = ft_range(0, 4);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], 
	range[1], range[2], range[3], range[4]);
	free(range);
	return 0;
}*/
