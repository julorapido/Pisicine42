/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:48:28 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/15 17:23:47 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_int_to_hexa(int i)
{
	int	hex;
	int	j;

	j = i;
	if (j < 16)
	{
		write(1, "0", 1);
		write(1, &("0123456789abcdef"[j]), 1);
	}
	else
	{
		while (j >= 16)
		{
			hex = j % 16;
			j /= 16;
			write(1, &("0123456789abcdef"[j]), 1);
			write(1, &("0123456789abcdef"[hex]), 1);
		}
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	char	rev;

	i = 0;
	rev = 92;
	while (str[i] != '\0')
	{
		j = (int)(str[i]);
		if (!(j > 31 && j < 127))
		{
			write(1, &(rev), 1);
			print_int_to_hexa(j);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/*int main()
{
	char *e = "\nCoucou\ntu vas bien ? \n"; 
	//printf("%s \n", e);
	ft_putstr_non_printable(e);
	return 0;
}*/
