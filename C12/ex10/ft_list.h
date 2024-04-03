/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 20:42:52 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 20:43:12 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	__FT_LIST_H__
# define __FT_LIST_H__

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif
