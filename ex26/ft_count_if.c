/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:48:03 by tbahlai           #+#    #+#             */
/*   Updated: 2018/10/24 16:50:33 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int a;
	int num;

	a = 0;
	num = 0;
	while (tab[a])
	{
		if (f(tab[a]) == 1)
			num++;
		a++;
	}
	return (num);
}
