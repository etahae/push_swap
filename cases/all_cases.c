/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_cases.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:33:54 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/25 11:35:51 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cases.h"

void	all_cases(t_list *list)
{
	if (list->a_lenght == 1)
		exit(0);
	else if (list->a_lenght <= 3)
		case3(list);
	else if (list->a_lenght <= 5)
		case5(list);
	else
		big_case(list);
}
