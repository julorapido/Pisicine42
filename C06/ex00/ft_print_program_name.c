/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <julesaintho@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:31:59 by jsaintho          #+#    #+#             */
/*   Updated: 2024/02/21 10:17:56 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	v;

	i = 0;
	v = argc;
	while (argv[0][i] != '\0')
	{
		write(1, &(argv[0][i]), 1);
		i++;
	}
	return (0);
}
