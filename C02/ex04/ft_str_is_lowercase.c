/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:20:48 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/12 11:55:23 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		r;
	int		i;
	int		p;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		p = (int) str[i];
		if (p >= 97 && p <= 122)
		{
			r++;
		}
		i++;
	}
	if (r == i || i == 0)
		return (1);
	else
		return (0);
}
