/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:57:16 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/03 11:53:05 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"
#include <stdlib.h>

int		ft_max(int a, int b)
{
	return (a > b ? a : b);
}

int		ft_btree_level_count(t_btree *root)
{
	int	c;

	c = 0;
	if (!root)
		return (0);
	if (root->left)
		c = ft_max(c, ft_btree_level_count(root->left));
	if (root->right)
		c = ft_max(c, ft_btree_level_count(root->right));
	return (c + 1);
}

void	call(t_btree *r, int r_level, int *lvls_,
		void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	is_first;

	is_first = 1;
	if (lvls_[r_level] == 1)
		is_first = 0;
	else
		lvls_[r_level] = 1;
	applyf(r->item, r_level, is_first);
	if (r->left)
		call(r->left, r_level + 1, lvls_, applyf);
	if (r->right)
		call(r->right, r_level + 1, lvls_, applyf);
}


void	btree_apply_by_level(t_btree *root, 
		void *(applyf)(void *item, int current_level, int is_first_elem))
{
	int	c;
	int	*lvls;
	int	i;

	if(!root)
		return ;
	c = ft_btree_level_count(root);
	if (!(lvls = (int*)malloc(sizeof(int) * c)))
		return ;
	i = 0;
	while (i < c)
		lvls[i++] = 0;
	call(root, 0, lvls, applyf);	
}
