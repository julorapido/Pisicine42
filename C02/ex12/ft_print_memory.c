/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:02:19 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/15 17:21:53 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

typedef unsigned long int	t_uli_;

void	print_ptr_content(void *addr)
{
	int		i;
	char	j;

	i = 0;
	while (i < 16)
	{
		j = *((char *)addr);
		if ((int)j > 31 && (int)j < 127)
			write(1, &j, 1);
		else
		{
			if (j == '\0')
				break ;
			write(1, ".", 1);
		}
		addr++;
		i++;
	}
	addr -= (i);
	write(1, "\n", 1);
}

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

void	print_ptr_content_hex(void *ptr, int ptr_size)
{
	int		i;
	char	v;

	i = 0;
	while (i < ptr_size && i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		v = *(char *)ptr;
		print_int_to_hexa(v);
		ptr++;
		i++;
	}
	ptr -= i;
	while (i <= 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i != 16)
			write(1, "  ", 2);
		i++;
	}
	print_ptr_content(ptr);
}

void	print_uli_to_hexa(t_uli_ i)
{
	t_uli_	hex;
	char	c;
	char	p[12];
	int		o;

	o = 0;
	write(1, "0000000", 7);
	while (i > 0)
	{
		hex = i % 16;
		i /= 16;
		if (hex > 9)
			c = (hex - 10) + 'a';
		else
			c = hex + '0';
		p[o] = c;
		o++;
	}
	while (o > 0)
	{
		write(1, &p[o], 1);
		o--;
	}
	write(1, ":", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	t_uli_			adr_;
	unsigned int	i;

	if (size == 0)
		return (addr);
	i = size;
	while (i >= 16)
	{
		adr_ = (t_uli_)(addr);
		print_uli_to_hexa(adr_);
		print_ptr_content_hex(addr, i);
		addr += 16;
		i -= 16;
	}
	if (i > 0)
	{
		print_uli_to_hexa((t_uli_)(addr));
		print_ptr_content_hex(addr, i);
	}
	return (addr);
}

/*int main()
{
	char p[] = "Bonjo5qwec les amis \n c'est fotout ce q
	u'onpeut faire avec print_memory lol  lol    wxee";

	ft_print_memory(p, 87);
	return 0;
}*/
