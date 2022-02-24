/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:12:15 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/22 18:04:09 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"tools.h"

char	*ft_strdup(const char	*s)
{
	char		*p;
	size_t		x;
	size_t		y;

	x = 0;
	y = 0;
	while (s[x])
	{
		x++;
	}
	p = malloc(x * sizeof(char) + 1);
	if (p == NULL)
		return (0);
	while (y < x)
	{
		p[y] = s[y];
		y++;
	}
	p[y] = 0;
	return ((char *)p);
}
