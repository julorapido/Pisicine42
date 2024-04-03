/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/03 00:52:55 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/03 00:55:16 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*a;

	if (!root || !*root || !item)
	{
		if (item && root)
			*root = btree_create_node(item);
		return ;
	}
	a = *root;
	if (cmpf(item, a->item) < 0)
	{
		if (a->left)
			btree_insert_data(&a->left, item, cmpf);
		else
			a->left = btree_create_node(item);
	}
	else
	{
		if (a->right)
			btree_insert_data(&a->right, item, cmpf);
		else
			a->right = btree_create_node(item);
	}
}
