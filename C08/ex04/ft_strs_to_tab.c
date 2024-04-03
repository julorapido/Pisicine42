/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:46:08 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/26 17:43:56 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;
*/

char	*ft_strcpy_up(int l, char *s)
{
	char	*up_;
	int		i;

	up_ = (char *) malloc((l + 1) * sizeof(char));
	if (!up_)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		up_[i] = s[i];
		i++;
	}
	up_[i] = '\0';
	return (up_);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*a;
	int			i;
	int			j;

	a = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!a)
		return ((void *) NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		a[i].size = j;
		a[i].str = av[i];
		a[i].copy = &(ft_strcpy_up(j, av[i]))[0];
		i++;
	}
	a[i].size = 0;
	a[i].str = 0;
	a[i].copy = 0;
	return (a);
}
