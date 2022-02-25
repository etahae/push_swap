/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:30:41 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/25 11:35:34 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASES_H
# define CASES_H

# include "../commands/commands.h"
# include <unistd.h>

void	all_cases(t_list *list);
void	case3(t_list *list);
void	case5(t_list *list);
void	big_case(t_list *list);
int		indexof(int *lista, int i);
int		*sorted_pointer(int *list, int lenght);

#endif
