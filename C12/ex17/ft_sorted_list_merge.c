/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/03 00:09:59 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/03 00:11:34 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*l;

	if (!begin_list || !*begin_list)
		*begin_list = begin_list2;
	else
	{
		l = *begin_list;
		while (l->next)
			l = l->next;
		l->next = begin_list2;
	}
}

void	f_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*i;
	t_list	*j;
	t_list	*next;

	if (!begin_list || !*begin_list)
		return ;
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	f_list_sort(begin_list1, cmp);
}
