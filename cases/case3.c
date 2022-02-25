/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:53:22 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/25 11:36:25 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"

void	case3(t_list *list)
{
	if (list->a_lenght == 2)
	{
		if (list->a[0] > list->a[1])
			sa(list, "sa\n");
	}
	else
	{
		if (list->a[0] > list->a[1] && list->a[0] > list->a[2])
		{
			ra(list, "ra\n");
			if (list->a[0] > list->a[1])
				sa(list, "sa\n");
		}
		else if (list->a[0] < list->a[1] && list->a[0] > list->a[2])
			rra(list, "rra\n");
		else if (list->a[0] > list->a[1] && list->a[0] < list->a[2])
			sa(list, "sa\n");
		else if (list->a[0] < list->a[2] && list->a[2] < list->a[1])
		{
			rra(list, "rra\n");
			sa(list, "sa\n");
		}
	}
}
