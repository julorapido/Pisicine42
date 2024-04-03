/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:26:11 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 23:35:48 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*l;

	if (!begin_list1 || !*begin_list1)
		*begin_list = begin_list2;
	else
	{
		l = *begin_list;
		while (l)
			l = l->next;
		l->next = begin_list2;
	}
}
