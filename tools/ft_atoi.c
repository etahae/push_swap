/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:04:07 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:04:07 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

long	ft_atoi(const char *str, t_list *list)
{
	int		i;
	int		sign;
	long	n;

	i = 0;
	sign = 1;
	n = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if ((n * sign) > 2147483647 || (n * sign) < -2147483648
		|| str[i] == '+' || str[i] == '-')
		errorlol(list);
	return (n * sign);
}
