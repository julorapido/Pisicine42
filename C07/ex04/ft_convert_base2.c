/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:59:55 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/26 21:47:56 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	valid_base(char *b)
{
	int		len;
	int		j;
	char	p[256];

	len = 0;
	while (len < 256)
	{
		p[len] = 0;
		len ++;
	}
	len = 0;
	while (b[len] != '\0')
	{
		j = 0;
		if (b[len] == '-' || b[len] == '+' || p[(int)b[len]] == 1
			|| !(b[len] >= 32 && b[len] <= 126))
			return (-1);
		p[(int)b[len]] = 1;
		len++;
	}
	if (len <= 1)
		return (-1);
	return (len);
}

int	char_index_in_base(char to_find, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (to_find == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	norminette_fix(int from, char *str, int *m)
{
	while (str[from] == '-' || str[from] == '+')
	{
		if (str[from] == '-')
			(*m)++;
		from++;
	}
	return (from);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	m;
	int	len;	

	len = valid_base(base);
	if (len == -1)
		return (-1);
	i = 0;
	m = 0;
	r = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	i = norminette_fix(i, str, &m);
	while (char_index_in_base(str[i], base) != -1)
	{
		r = (r * len) + (char_index_in_base(str[i], base));
		i++;
	}
	if (m % 2 != 0)
		r = r * -1;
	return (r);
}
