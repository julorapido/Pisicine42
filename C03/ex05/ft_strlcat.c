/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:17:39 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/15 17:27:46 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dst_len;
	unsigned int	offst;

	dst_len = str_len(dest);
	src_len = str_len(src);
	offst = dst_len;
	i = 0;
	if (dst_len >= size)
		return (src_len + size);
	while (src[i] != '\0' && i < size - dst_len - 1)
	{
		dest[offst] = src[i];
		offst++;
		i++;
	}
	dest[offst] = '\0';
	return (dst_len + src_len);
}
