/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:02:34 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:02:34 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	rrb(t_list *list, char	*print)
{
	int	tmpp_b;
	int	x;

	if (list->b_lenght)
	{
		tmpp_b = list->a[list->b_lenght - 1];
		x = list->a_lenght - 1;
		while (x > 0)
		{
			list->b[x] = list->b[x - 1];
			x--;
		}
		list->b[x] = tmpp_b;
		write(1, print, 4);
	}
}
