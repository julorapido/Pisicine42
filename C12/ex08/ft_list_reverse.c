/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 22:14:29 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 22:37:33 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*next;
	t_list	*list;

	previous = NULL;
	list = *begin_list;
	while (list != NULL)
	{
		next = list->next;
		list->next = previous;
		previous = list;
		list = next;
	}
	*begin_list = previous;
}
