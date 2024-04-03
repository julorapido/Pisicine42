/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 16:28:40 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 16:58:30 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

int	v_operator(char *str)
{
	if (str[0] != '\0' &&
			(str[0] == '+' || str[0] == '-' || str[0] == '/' || str[0] == '*' || str[0] == '%'))
		return (1);
	else
		return (0);
}

int	calculate(int first, char ope, int second)
{
	if (ope == '+')
		return (first + second);
	else if (ope == '-')
		return (first - second);
	else if (ope == '*')
		return (first * second);
	else if (ope == '/')
		return (first / second);
	else if (ope == '%')
		return (first % second);
	else
		return (0);
}

int	operation_valid(char ope, int second)
{
	if (ope == '/' && second == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (ope == '%' && second == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else
		return (1);
}


int	main(int argc, char **args)
{
	int first;
	int second;

	if (argc != 4)
		return (0);
	if (ft_str_is_alpha(args[1]) || ft_str_is_alpha(args[3]) || !v_operator(args[2]))
	{
		ft_putstr("0\n");
		return (0);
	}
	first = ft_atoi(args[1]);
	second = ft_atoi(args[3]);
	if (!operation_valid(args[2][0], second))
		return (0);
	ft_putnbr(calculate(first, args[2][0], second));
	ft_putchar('\n');
	return (0);
}
