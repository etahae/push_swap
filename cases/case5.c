/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:05:43 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/23 18:49:12 by tnamir           ###   ########.fr       */
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

int	*sorter(int *list, int lenght)
{
	int	x;
	int	*a_clone;

	a_clone = malloc(lenght * sizeof(int));
	x = 0;
	while (x < lenght)
	{
		a_clone[x] = list[x];
		x++;
	}
	while (!is_sorted(a_clone, lenght))
		sort(a_clone, lenght);
	return (a_clone);
}

void	case5(t_list *list)
{
	int	*clone;
	int	y;

	y = -1;
	clone = sorter(list->a, list->a_lenght);
	while (++y < 2)
	{
		while (list->a[0] != clone[y])
		{
			if (indexof(list->a, clone[y]) < list->a_lenght / 2)
				ra(list, "ra\n");
			else
				rra(list, "rra\n");
		}
		pb(list, "pb\n");
	}
	case3(list);
	pa(list, "pa\n");
	pa(list, "pa\n");
	free(clone);
}
