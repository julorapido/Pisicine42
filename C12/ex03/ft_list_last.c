/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 20:59:04 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 23:14:40 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_last(t_list **begin_list, void *data)
{
	t_list	*p;

	p = *begin_list;
	if(p)
	{
		while (p->next)
			p = p->next;
	}
	return (p);
}
