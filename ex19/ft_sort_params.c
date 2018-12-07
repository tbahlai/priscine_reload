/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbahlai <tbahlai@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:29:34 by tbahlai           #+#    #+#             */
/*   Updated: 2018/10/24 14:07:59 by tbahlai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return (1);
		if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	if (s1[i] && !s2[i])
		return (1);
	if (s2[i] && !s1[i])
		return (-1);
	return (0);
}

void	ft_sort_params(char **str)
{
	int		i;
	char	*c;

	i = 1;
	while (str[i + 1])
	{
		if (ft_strcmp(str[i], str[i + 1]) > 0)
		{
			c = str[i];
			str[i] = str[i + 1];
			str[i + 1] = c;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (str[i])
	{
		ft_putstr(str[i]);
		i++;
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	if (ac > 1)
		ft_sort_params(av);
	return (0);
}
