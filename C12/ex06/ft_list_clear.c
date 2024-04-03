/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:05:16 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 22:09:09 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void *(free_fct)(void *))
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	tmp = NULL;
	while (list)
	{
		if (list->next)
			tmp = list->next;
		else
			tmp = NULL;
		(*free_fct)(list->data);
		free(list)
		list = tmp;
	}	
}
