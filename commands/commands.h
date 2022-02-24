/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:04:57 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:04:57 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMANDS_H
# define COMMANDS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct list
{
	int	*a;
	int	*b;
	int	a_lenght;
	int	b_lenght;
}	t_list;

void	sa(t_list *list, char	*print);
void	sb(t_list *list, char	*print);
void	pa(t_list *list, char	*print);
void	pb(t_list *list, char	*print);
void	rra(t_list *list, char	*print);
void	rrb(t_list *list, char	*print);
void	ra(t_list *list, char	*print);
void	rb(t_list *list, char	*print);

#endif