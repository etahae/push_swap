/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:44:14 by tnamir            #+#    #+#             */
/*   Updated: 2021/11/30 15:44:14 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin_gnl(char	*s1, char	*s2);
char	*ft_strchr_gnl(const char	*s, int c);
size_t	ft_strlen_gnl(const char	*s);
char	*ft_substr_gnl(char	*s, unsigned int start, size_t len);
int		gnl_strcmp(char *s1, char *s2);

#endif