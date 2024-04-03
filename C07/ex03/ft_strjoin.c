/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:15:43 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/26 15:49:41 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	strs_size(char **strs, int strs_l)
{
	int	i;
	int	j;
	int	o;

	i = 0;
	o = 0;
	while (i < strs_l)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			o += 1;
			j++;
		}
		i++;
	}
	return (o);
}

void	str_cat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		m_size;
	char	*heap_s;

	if (size == 0)
	{
		heap_s = (char *) malloc(1 * sizeof(char));
		*heap_s = 0;
		return (heap_s);
	}
	m_size = strs_size(strs, size);
	heap_s = (char *) malloc((m_size + (size * str_len(sep))) * sizeof(char));
	if (!heap_s)
		return (NULL);
	*heap_s = 0;
	i = 0;
	while (i < size)
	{
		str_cat(heap_s, strs[i]);
		if (i < size - 1)
			str_cat(heap_s, sep);
		i++;
	}
	return (heap_s);
}

/*
int main()
{

	char **p = (char **) malloc((2) * (sizeof(char *)));
	for(int i = 0; i < 2; i ++)
		p[i] = (char *) malloc(3 * sizeof(char));
	p[0] = "abc"; p[1] = "def";
	char sp[] = "..";
	printf("abcefgmmm \n");
	char *o = ft_strjoin(2, p, sp);
	printf("%s \n", o);
    //for(int i = 0; i < 2; i ++) free(p[i]);
	free(o);
	return 0;
}*/
