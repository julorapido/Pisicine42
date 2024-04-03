/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 22:48:42 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 22:53:24 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*l;

	l = begin_list;
	while (l)
	{
		if ((*cmp)(l, data_ref) == 0)
			return (l);
		l = l->next;
	}
	return (0);
}
