/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:36:17 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 23:49:51 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*p;
	t_list	*p2;
	t_list	*t;

	p = *begin_list;
	while (p)
	{
		p2 = *begin_list;
		while (p2)
		{
			if ((*cmp)(p2->data, p2->next->data) > 0)
			{
				t = p2->data;
				p2->data = p2->next->data;
				p2->next->data = t;
			}
			p2 = p2->next;
		}
		p = p->next;
	}
}
