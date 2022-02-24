/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:58:42 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/23 18:27:08 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"tools.h"

char	*ft_strjoin(char	*s1, char	*s2)
{
	char		*p;
	size_t		x;
	size_t		y;

	y = 0;
	x = 0;
	if (s1 != 0 && s2 != 0)
	{
		p = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 2);
		if (p == NULL)
			return (0);
		while (x < ft_strlen(s1))
		{
			p[x] = s1[x];
			x++;
		}
		p[x++] = ' ';
		while (y <= ft_strlen(s2))
			p[x++] = s2[y++];
		free(s1);
		return (p);
	}
	return (0);
}
