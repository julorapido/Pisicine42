/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:34:28 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/26 21:49:35 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	valid_base(char *b);

char	*ft_putnbr_base(int nbr, char *base)
{
	int		j;
	int		n;
	char	*s;
	long	true_nbr;

	s = (char *) malloc(250 * sizeof(char));
	if (valid_base(base) == -1 || (!s))
		return (0);
	true_nbr = nbr;
	j = 0;
	n = nbr;
	if (true_nbr < 0)
		true_nbr *= -1;
	s[0] = base[0];
	while (true_nbr > 0)
	{
		s[j] = (char) base[(int)(true_nbr % valid_base(base))];
		true_nbr /= valid_base(base);
		j ++;
	}
	if (n < 0)
		s[j] = '-';
	s[j + 1] = '\0';
	return (s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a;
	int		i;
	int		j;
	char	*s;
	char	*p;

	a = ft_atoi_base(nbr, base_from);
	s = ft_putnbr_base(a, base_to);
	if (a == -1 || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	p = (char *) malloc((i + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i-- >= 0)
	{
		p[j] = s[i];
		j++;
	}
	p[j] = '\0';
	free(s);
	return (p);
}

/*
int main()
{
	char *s = ft_convert_base(" -0tt", "01234567899", "0123456789");
	printf("%s \n", s);
	free(s);
	return 0;
}*/
