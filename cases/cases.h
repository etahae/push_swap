/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:30:41 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/24 18:11:44 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASES_H
# define CASES_H

# include "../commands/commands.h"
# include <unistd.h>

void	all_cases(t_list *list);
void	case3(t_list *list);
void	case5(t_list *list);
void	case100(t_list *list);
void	case500(t_list *list);
int		indexof(int *lista, int i);
int		*sorted_pointer(int *list, int lenght);

#endif
