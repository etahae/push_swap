/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:44:07 by tnamir            #+#    #+#             */
/*   Updated: 2021/11/30 15:44:07 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

static char	*cpy_till_nl(char	*text)
{
	int		x;
	char	*l;

	if (text[0] == '\0')
		return (NULL);
	x = 0;
	while (text[x] != '\n' && text[x] != '\0')
		x++;
	l = malloc(x + 2);
	if (l == NULL)
		return (NULL);
	x = 0;
	while (text[x] != '\n' && text[x] != '\0')
	{
		l[x] = text[x];
		x++;
	}
	if (text[x] == '\n')
	{
		l[x] = '\n';
		l[x + 1] = '\0';
	}
	else
		l[x] = '\0';
	return (l);
}

static char	*del_till_nl(char	*text)
{
	int		x;
	int		y;
	char	*p;

	x = 0;
	y = 0;
	if (text[0] == '\0')
	{
		free(text);
		return (NULL);
	}
	while (text[x] != '\n' && text[x] != '\0')
		x++;
	x++;
	p = ft_substr_gnl(text, x, ft_strlen_gnl(text) - x);
	return (p);
}

static char	*study(int fd, char *text)
{
	int		size;
	char	*line;

	size = 1;
	while (size != 0 && !ft_strchr_gnl(text, '\n'))
	{
		line = malloc(1);
		if (line == NULL)
			return (NULL);
		size = read(fd, line, 1);
		if (size == -1 || !gnl_strcmp(line, "\0"))
		{
			free(line);
			return (NULL);
		}
		line[size] = '\0';
		text = ft_strjoin_gnl(text, line);
		free(line);
	}
	return (text);
}

char	*get_next_line(int fd)
{
	static char	*text;
	char		*perfectline;

	if (fd < 0)
		return (NULL);
	text = study(fd, text);
	if (text == NULL)
		return (NULL);
	perfectline = cpy_till_nl(text);
	text = del_till_nl(text);
	return (perfectline);
}
