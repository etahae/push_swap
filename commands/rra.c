/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:02:29 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:02:29 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	rra(t_list *list, char	*print)
{
	int	tmpp_a;
	int	x;

	if (list->a_lenght)
	{
		tmpp_a = list->a[list->a_lenght - 1];
		x = list->a_lenght - 1;
		while (x > 0)
		{
			list->a[x] = list->a[x - 1];
			x--;
		}
		list->a[x] = tmpp_a;
		write(1, print, 4);
	}
}
