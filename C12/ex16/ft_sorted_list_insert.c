/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 00:02:58 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/03 00:06:14 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	list_push_back(t_list **begin_list, void *data)
{
	t_list	*l;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	l = *begin_list;
	while (l->next)
		l = l->next;
	l->next = ft_create_elem(data);
}

void	list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*i;
	t_list	*j;
	t_list	*next;

	i = *begin_list;
	while (i)
	{
		j = *begin_list;
		while (j->next)
		{
			if ((*cmp)(j->data, j->next->data) > 0)
			{
				next = j->data;
				j->data = j->next->data;
				j->next->data = next;
			}
			j = j->next;
		}
		i = i->next;
	}
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	list_push_back(begin_list, data);
	list_sort(begin_list, cmp);
}
