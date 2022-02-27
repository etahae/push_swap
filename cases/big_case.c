/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:06:09 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/27 19:18:25 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"

int	bits_passer_max(int lenght)
{
	if (lenght < 8)
		return (3);
	else if (lenght < 16)
		return (4);
	else if (lenght < 32)
		return (5);
	else if (lenght < 64)
		return (6);
	else if (lenght < 128)
		return (7);
	else if (lenght < 256)
		return (8);
	else if (lenght < 512)
		return (9);
	else
		return (10);
}

void	counting_sort(t_list	*index, t_list *list, int bits)
{
	if (!(index->a[0] & 1 << bits))
	{
		pb(index, NULL);
		pb(list, "pb\n");
	}
	else
	{
		ra(index, NULL);
		ra(list, "ra\n");
	}
}

void	sort(t_list	*index, t_list *list)
{
	int	bits_passer;
	int	const_lenght;
	int	x;

	bits_passer = 0;
	while (bits_passer < bits_passer_max(list->a_lenght))
	{
		x = 0;
		const_lenght = index->a_lenght;
		while ((x++ < const_lenght))
			counting_sort(index, list, bits_passer);
		while (list->b_lenght > 0)
		{
			pa(index, NULL);
			pa(list, "pa\n");
		}
		bits_passer++;
	}
}

void	big_case(t_list *list)
{
	t_list	index;
	int		*sorted;
	int		x;
	int		y;

	x = 0;
	y = 0;
	sorted = sorted_pointer(list->a, list->a_lenght);
	index.a = malloc(list->a_lenght * sizeof(int));
	while (x < list->a_lenght)
		index.a[indexof(list->a, sorted[y++])] = x++;
	index.a_lenght = list->a_lenght;
	index.b_lenght = list->b_lenght;
	sort(&index, list);
	free(sorted);
	free(index.a);
	free(index.b);
}
