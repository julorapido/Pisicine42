/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 15:53:54 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 16:02:45 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	c;

	c = 0;
	while (c < length - 1)
	{
		if (f(tab[c], tab[c + 1]) > 0)
			return (0);
		c++;
	}
	return (1);
}
