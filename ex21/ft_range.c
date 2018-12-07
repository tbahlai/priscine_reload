/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:06:40 by tbahlai           #+#    #+#             */
/*   Updated: 2018/10/24 16:19:52 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int i;

	if (min >= max)
		return (0);
	res = (int*)malloc(sizeof(*res) * (max - min) + 1);
	if (res == NULL)
		return (0);
	i = 0;
	while (min + i < max)
	{
		res[i] = min + i;
		i++;
	}
	res[i] = 0;
	return (res);
}
