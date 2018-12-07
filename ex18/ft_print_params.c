/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:16:52 by tbahlai           #+#    #+#             */
/*   Updated: 2018/10/24 13:28:30 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char **av)
{
	int index;
	int n;

	index = 0;
	n = 1;
	while (ac > n)
	{
		while (av[n][index])
		{
			ft_putchar(av[n][index]);
			index++;
		}
		ft_putchar('\n');
		index = 0;
		n++;
	}
}
