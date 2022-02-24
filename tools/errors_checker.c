/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:03:51 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:03:51 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	errorlol(t_list *list)
{
	write(1, "Error\n", 6);
	if (list)
		free(list->a);
	exit(0);
}

void	only_numbers(char	*s, t_list *list)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (!((s[x] >= '0' && s[x] <= '9') || s[x] == ' '
				|| s[x] == '+' || s[x] == '-'))
		{
			free(s);
			errorlol(list);
		}
		x++;
	}
}

void	no_doubles(char **s, t_list *list)
{
	int	x;
	int	y;
	int	number;

	y = 1;
	while (s[y])
	{
		x = 1;
		number = ft_atoi(s[y], list);
		while (s[x])
		{
			if (ft_atoi(s[x], list) == number && y != x)
				errorlol(NULL);
			x++;
		}
		y++;
	}
}
