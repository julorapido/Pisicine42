/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:56:12 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 23:11:58 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*list;
	t_list	*remove;

	list = *begin_list;
	while (list && list->next)
	{
		if ((*cmp)(list->next->data, data_ref) == 0)
		{
			remove = list->next;
			list->next = (list->next)->next;
			(*free_fct)(remove->data);
			free(remove);
		}
		list = list->next;
	}
	list = *begin_list;
	if (list && (*cmp)(list->data, data_ref) == 0)
	{
		*begin_list = list->next;
		(*free_fct)(list->data);
		free(list);
	}
}
