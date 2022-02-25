/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:00:06 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:00:06 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	pb(t_list *list, char	*print)
{
	int	tmp_a;
	int	*tmp_b;
	int	x;

	if (list->a_lenght)
	{
		x = -1;
		tmp_a = list->a[0];
		tmp_b = list->b;
		list->b_lenght++;
		list->b = malloc(list->b_lenght * sizeof(int));
		list->b[0] = tmp_a;
		while (++x < list->b_lenght - 1)
			list->b[x + 1] = tmp_b[x];
		x = 0;
		list->a_lenght--;
		while (x <= list->a_lenght)
		{
			list->a[x] = list->a[x + 1];
			x++;
		}
		free(tmp_b);
		write(1, print, 3);
	}
}
