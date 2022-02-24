/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:01:09 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:01:09 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	pa(t_list *list, char	*print)
{
	int	tmp_b;
	int	*tmp_a;
	int	x;

	x = 0;
	tmp_b = list->b[0];
	tmp_a = list->a;
	list->a_lenght++;
	list->a = malloc((list->a_lenght) * sizeof(int));
	list->a[0] = tmp_b;
	while (x < list->a_lenght - 1)
	{
		list->a[x + 1] = tmp_a[x];
		x++;
	}
	x = 0;
	list->b_lenght--;
	while (x <= list->b_lenght)
	{
		list->b[x] = list->b[x + 1];
		x++;
	}
	free(tmp_a);
	write(1, print, 3);
}
