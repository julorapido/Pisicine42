/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 15:44:39 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 15:48:15 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	c;

	c = 0;
	res = (int *)malloc(length * sizeof(int));
	while (c < length)
	{
		res[c] = (*f)(tab[c]);
		c++;
	}
	return (res);
}
