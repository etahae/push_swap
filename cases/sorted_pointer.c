/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:37:07 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/25 11:37:49 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"

static int	is_sorted(int	*list, int lenght)
{
	int	x;

	x = 0;
	while (x < lenght - 1)
	{
		if (list[x] > list[x + 1])
			return (0);
		x++;
	}
	return (1);
}

static void	sort(int	*a_clone, int lenght)
{
	int	x;
	int	tmp;

	x = 0;
	while (x < lenght - 1)
	{
		if (a_clone[x] > a_clone[x + 1])
		{
			tmp = a_clone[x];
			a_clone[x] = a_clone[x + 1];
			a_clone[x + 1] = tmp;
		}
		x++;
	}
}

int	*sorted_pointer(int *list, int lenght)
{
	int	x;
	int	*a_clone;

	a_clone = malloc(lenght * sizeof(int));
	x = -1;
	while (++x < lenght)
		a_clone[x] = list[x];
	while (!is_sorted(a_clone, lenght))
		sort(a_clone, lenght);
	return (a_clone);
}
