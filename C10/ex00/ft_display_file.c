/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julessainthorant <marvin@42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/00/28 14:57:10 by julessainthor     #+#    #+#             */
/*   Updated: 2024/04/02 15:42:35 by julessainthor    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void	display(char *file_name)
{
	int		fd;
	char	buffer;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Open error!\n", 12);
		return ;
	}
	while (read(fd, &buffer, 1) > 0)
		write(1, &buffer, 1);
	if (close(fd) == -1)
		write(2, "Close error!\n", 13);
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}else
		display(argv[1]);
	return (0);
}
