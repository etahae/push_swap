/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:29:06 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/25 11:38:02 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	is_sorted(t_list *list)
{
	int	x;

	x = 0;
	while (x < list->a_lenght - 1)
	{
		if (list->a[x] > list->a[x + 1])
			return ;
		x++;
	}
	free(list->a);
	exit(0);
}
