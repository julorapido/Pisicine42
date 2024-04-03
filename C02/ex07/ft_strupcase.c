/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:37:14 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/10 13:03:53 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int		i;
	int		c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (int) str[i];
		if (c >= 97 && c <= 122)
		{
			c -= 32;
		}
		str[i] = c;
		i++;
	}
	return (str);
}