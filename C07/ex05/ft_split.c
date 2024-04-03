/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:09:49 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/27 16:17:42 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_char_sep(char c, char *split_word)
{
	int	i;

	i = 0;
	while (split_word[i] != '\0')
	{
		if (c == split_word[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_wrds(char *str, char *splitter)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (is_char_sep(str[i], splitter) == 0
			&& is_char_sep(str[i + 1], splitter) == 1)
				w++;
		i++;
	}
	return (w);
}

void	w_wrdup_(char	*dest, char *f, char *charset)
{
	int	i;

	i = 0;
	while (is_char_sep(f[i], charset) == 0)
	{
		dest[i] = f[i];
		i++;
	}
	dest[i] = '\0';
}

void	run_split(char **splt_, char *str, char *splitter_)
{
	int	i;
	int	j;
	int	w_count;

	i = 0;
	w_count = 0;
	while (str[i] != '\0')
	{
		if (is_char_sep(str[i], splitter_) == 1)
			i++;
		else
		{
			j = 0;
			while (is_char_sep(str[i + j], splitter_) == 0)
				j++;
			splt_[w_count] = (char *) malloc((j + 1) * (sizeof(char)));
			w_wrdup_(splt_[w_count], str + i, splitter_);
			w_count++;
			i += j;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**s;
	int		words_count;

	words_count = count_wrds(str, charset);
	s = (char **) malloc((words_count + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	s[words_count] = 0;
	run_split(s, str, charset);
	return (s);
}

/*
int main()
{
	char a[] = "....bonjour..jesuis..dd..ddd";
	char b[] = "..";
	char **o = ft_split(a, b);

	char c[] = " r gg sflg eol.gb erp";
	char d[] = " ";	
    char **m = ft_split(c, d);

	
	int i, j, k;
	i = j = k = 0;
	printf("[");
	while(o[i]){
		printf("%s,", o[i]);
		i++;
	}
	printf("]\n[");
	while(m[j]){
		printf("%s,", m[j]);
		j++;
	}
	printf("]");
	return (0);
}*/
