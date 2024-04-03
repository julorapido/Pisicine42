/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:17:06 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 22:04:26 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	el;
	int		i;

	if (size <= 0)
		return (0);
	list = ft_create_elem(strs[size]);
	while (--size > 0)
	{
		el = ft_create_elem(strs[size]);
		el->next = list;
		list = el;
	}
	return (list);
}
