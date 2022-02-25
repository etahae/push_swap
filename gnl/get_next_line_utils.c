/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:44:27 by tnamir            #+#    #+#             */
/*   Updated: 2021/11/30 15:44:27 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_gnl(const char	*s, int c)
{
	size_t	x;
	size_t	len;

	x = 0;
	if (!s)
		return (NULL);
	len = ft_strlen_gnl(s);
	while (x != len)
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	return (0);
}

char	*ft_strjoin_gnl(char	*s1, char	*s2)
{
	char		*p;
	size_t		x;
	size_t		y;
	size_t		lens1;

	lens1 = ft_strlen_gnl(s1);
	y = 0;
	x = -1;
	if (s2 != 0)
	{
		p = malloc((lens1 + ft_strlen_gnl(s2)) * sizeof(char) + 1);
		if (p == NULL)
			return (0);
		while (++x < lens1)
			p[x] = s1[x];
		while (y < ft_strlen_gnl(s2))
			p[x++] = s2[y++];
		p[x] = 0;
		free (s1);
		return (p);
	}
	return (NULL);
}

size_t	ft_strlen_gnl(const char	*s)
{
	size_t	x;

	if (!s)
		return (0);
	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

char	*ft_substr_gnl(char	*s, unsigned int start, size_t len)
{
	char		*p;
	size_t		y;
	size_t		x;

	y = 0;
	x = 0;
	if (s != 0)
	{
		p = (char *)malloc(len * sizeof(char) + 1);
		if (p == NULL || p == 0)
			return (0);
		while (start < ft_strlen_gnl(s) && x < len)
		{
			p[y] = s[start];
			start++;
			y++;
			x++;
		}
		p[y] = 0;
		free(s);
		return (p);
	}
	return (NULL);
}

int	gnl_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
