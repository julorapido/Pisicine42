/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:32:32 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/03 10:40:34 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!root || !data_ref)
		return (NULL);
	if (root->left)
		btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)(root->item, data_ref) == 0)
		return (root->item);
	if (root->right)
		btree_search_item(root->left, data_ref, cmpf);
	return (NULL);
}
