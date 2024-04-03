/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:24:28 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/03 00:13:19 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 0;
	while (tab[i + 1][0] != '\0')
	{
		if (cmp(tab[i + 1], tab[i]) < 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
		}
		i++;
	}
}
