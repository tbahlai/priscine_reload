/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:47:00 by tbahlai           #+#    #+#             */
/*   Updated: 2018/10/26 12:10:03 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
