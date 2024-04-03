/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:46:59 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/22 17:00:33 by jsaintho         ###   ########.fr       */
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
			|| b[len] == ' ' || b[len] == '\t' || b[len] == '\r'
			|| b[len] == '\n' || b[len] == '\v' || b[len] == '\f')
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
		return (0);
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

/*int main()
{
	char q[] = "----+-&awd8awzyq";
	char d[] = "01&3456789abcdef";
	printf("%s \n", q);
	int	p = ft_atoi_base(q, d);
	printf("%d \n", p);
	return 0;
}*/
