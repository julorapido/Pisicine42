/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 20:43:19 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 20:47:59 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*p;

	p = begin_list;
	i = 0;
	while(p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
