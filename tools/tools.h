/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:04:42 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:04:42 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../commands/commands.h"

long	ft_atoi(const char *str, t_list *list);
void	only_numbers(char	*s, t_list *list);
void	no_doubles(char **s, t_list *list);
void	errorlol(t_list *list);
size_t	ft_strlen(const char	*s);
char	**ft_split(char const *s, char c);
char	*ft_substr(char	const	*s, unsigned int start, size_t len);
char	*ft_strjoin(char	*s1, char	*s2);
char	*ft_strdup(const char	*s);
void	is_sorted(t_list *list);

#endif