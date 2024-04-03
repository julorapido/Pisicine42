/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 22:10:07 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 22:13:56 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*l;

	if (nbr == 0)
		return (begin_list);
	i = 0;
	l = begin_list;
	while (i < nbr)
	{
		if (l->next == NULL)
			return (NULL);
		l = l->next;
		i++;
	}
	return (l);
}
