/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/02 16:17:48 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 16:28:28 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int i);
// int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
// char	*ft_strrev(char *str);
// void	ft_swap(int *a, int *b);
int		ft_atoi(char *str);
int		ft_str_is_alpha(char *str);
int		ft_is_numeric(char *str);
int		sub(int i, int j);
int		add(int i, int j);
int		div(int i, int j);
int		mod(int i, int j);
int		multiply(int i, int j);

#endif
