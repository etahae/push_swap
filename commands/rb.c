/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:02:03 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:02:03 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "commands.h"

void	rb(t_list *list, char	*print)
{
	int	tmpp_b;
	int	x;

	tmpp_b = list->b[0];
	x = 0;
	while (x < list->b_lenght - 1)
	{
		list->b[x] = list->b[x + 1];
		x++;
	}
	list->b[x] = tmpp_b;
	write(1, print, 3);
}
