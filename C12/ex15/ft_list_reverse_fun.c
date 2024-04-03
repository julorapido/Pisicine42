/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:53:12 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 23:56:38 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		count;
	int		i;
	int		j;
	t_list	*list;
	void	*tmp;

	count = 0;
	list = begin_list;
	while (list && ++count)
		list = list->next;
	i = 0;
	while (i < count - 1)
	{
		j = i;
		list = begin_list;
		while (list && list->next && j < count - 1)
		{
			tmp = list->data;
			list->data = list->next->data;
			list->next->data = tmp;
			list = list->next;
			++j;
		}
		++i;
	}
}
