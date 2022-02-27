/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:56:20 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/27 19:28:34 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	sort_conds_cont(t_list	*list, char	*p)
{
	if (!strcmp(p, "rrr\n"))
	{
		rra(list, NULL);
		rrb(list, NULL);
	}
	else if (!strcmp(p, "sa\n"))
		sa(list, NULL);
	else if (!strcmp(p, "sb\n"))
		sb(list, NULL);
	else if (!strcmp(p, "ss\n"))
	{
		sa(list, NULL);
		sb(list, NULL);
	}
	else
		errorlol(list);
}

static void	sort_conditions(t_list	*list, char	*p)
{
	if (!strcmp(p, "pa\n"))
		pa(list, NULL);
	else if (!strcmp(p, "pb\n"))
		pb(list, NULL);
	else if (!strcmp(p, "ra\n"))
		ra(list, NULL);
	else if (!strcmp(p, "rra\n"))
		rra(list, NULL);
	else if (!strcmp(p, "rb\n"))
		rb(list, NULL);
	else if (!strcmp(p, "rr\n"))
	{
		ra(list, NULL);
		rb(list, NULL);
	}
	else if (!strcmp(p, "rrb\n"))
		rrb(list, NULL);
	else
		sort_conds_cont(list, p);
}

static void	sortem(t_list	*list)
{
	char	*p;

	p = get_next_line(0);
	while (p)
	{
		sort_conditions(list, p);
		p = get_next_line(0);
	}
	if (is_sorted_end(list->a, list->a_lenght))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

static void	to_be_main(t_list *list, char **final_nums, char *nums)
{
	int	x;
	int	y;

	y = 0;
	final_nums = ft_split(nums, ' ');
	free(nums);
	x = 0;
	while (final_nums[x])
		x++;
	x++;
	no_doubles(final_nums, list);
	list->a = malloc((x) * sizeof(int));
	while (y < x - 1)
	{
		list->a[y] = ft_atoi(final_nums[y], list);
		y++;
	}
	y = -1;
	while (final_nums[++y])
		free(final_nums[y]);
	free(final_nums);
	list->a_lenght = x - 1;
	list->b_lenght = 0;
}

int	main(int argc, char **argv)
{
	int		x;
	char	*nums;
	char	**final_nums;
	t_list	list;

	x = 1;
	if (argc > 1)
	{
		final_nums = NULL;
		list.a = NULL;
		nums = ft_strdup(argv[x++]);
		only_numbers(nums, &list);
		while (argv[x])
		{
			nums = ft_strjoin(nums, argv[x++]);
			only_numbers(nums, &list);
		}
		to_be_main(&list, final_nums, nums);
		sortem(&list);
		free(list.b);
	}
	return (0);
}
