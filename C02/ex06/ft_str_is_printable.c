/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:20:48 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/13 18:50:07 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		r;
	int		i;
	int		p;

	i = 0;
	r = 0;
	while (str[i] != '\0')
	{
		p = (int) str[i];
		if (p >= 32 && p <= 126)
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
