/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:12:53 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/26 15:32:58 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	tab = (int *) malloc(((max) - min) * sizeof(int));
	if (!tab || min >= max)
	{
		*(range) = NULL;
		return (0);
	}
	i = 0;
	while (min < (max))
	{
		tab[i] = min;
		i ++;
		min++;
	}
	*range = tab;
	return (i);
}

/*
int main()
{
	int	**c = (int **) malloc(1 * sizeof(int *));

	ft_ultimate_range(c, 0, 15);
	for(int i = 0; i < 14; i++)
		printf("%d \n", c[0][i]);
	free(c[0]);
	free(c);
	return 0;
}*/
