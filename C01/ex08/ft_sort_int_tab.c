/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 08:55:10 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/10 12:57:28 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* bbl sort */
/* little bit optimised by break if temp 0*/
void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
		if (temp == 0)
		{
			break ;
		}
	}
}

/* int main()
{
	int ar[] = {1, 8, 12, 200, 9, 16, 4};
	int *prt;
	prt =  &(ar[0]);
	for(int i = 0; i  < 7; i++) printf("%d ", ar[i]);
	printf("\n");
	ft_sort_int_tab(ar, 7);
	for(int j = 0; j < 7; j++) printf("%d ", ar[j]);
	return	0;
}*/
