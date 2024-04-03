/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:11:21 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/18 12:22:59 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		_len;

	_len = str_len(to_find);
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (j < _len && str[i + j] != '\0' && str[i + j] == to_find[j])
			{
				j++;
			}
			if (j == _len)
				return (&(str[i]));
		}
		i++;
	}
	return (0);
}

/*int main()
{
	char e[] = "abcfqweqeabcdefg";
	char g[] = "acffwerwerfqw";
	char z[] = "asdfwe";
	char b[] = "qweddroldfg";
	char f[] = "";
	char o[] = "eprqwe";
	printf("%s \n", ft_strstr(e, f));
	printf("%s \n", ft_strstr(g, f));
    printf("%s \n", ft_strstr(z, f));
    printf("%s \n", ft_strstr(o, f));
	printf("%s \n", ft_strstr(b, f));
	return 0;
}*/
