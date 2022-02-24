/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:06:09 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/24 18:50:07 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"

void	case100(t_list *list)
{
	int	small_int;
	int	index;
	int	*sorted;
	int	x;

	x = 0;
	sorted = sorted_pointer(list->a, list->a_lenght);
	while (list->a_lenght > 0)
	{
		small_int = sorted[x];
		index = indexof(list->a, small_int);
		while (list->a[0] != small_int)
		{
			if (index < list->a_lenght / 2)
				ra(list, "ra\n");
			else
				rra(list, "rra\n");
		}
		pb(list, "pb\n");
		x++;
	}
	while (list->b_lenght > 0)
		pa(list, "pa\n");
	// int **lol = chunks100(sorted, list.a);
	// x = 0;
	// while (x < 5)
	// {
	// 	for(int i = 0; i < 20; i++)
	//    		printf("%d ", lol[x][i]);
	// 	printf("\n");
	// 	x++;
	// }
	//   for(int i = 0; i < list->a_lenght; i++)
	//   	printf("%d ", list->a[i]);
	//   printf("\n");
	//   for(int i = 0; i < list->b_lenght; i++)
	//   	printf("%d ", list->b[i]);
}
