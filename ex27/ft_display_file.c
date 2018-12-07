/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:01:36 by tbahlai           #+#    #+#             */
/*   Updated: 2018/10/26 11:51:32 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	display(char *file)
{
	int		fd;
	int		red;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	while ((red = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[red + 1] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
		display(av[1]);
	return (0);
}
