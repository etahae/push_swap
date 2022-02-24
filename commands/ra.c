/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:01:27 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:01:27 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	ra(t_list *list, char	*print)
{
	int	tmpp_a;
	int	x;

	tmpp_a = list->a[0];
	x = 0;
	while (x < list->a_lenght - 1)
	{
		list->a[x] = list->a[x + 1];
		x++;
	}
	list->a[x] = tmpp_a;
	write(1, print, 3);
}
