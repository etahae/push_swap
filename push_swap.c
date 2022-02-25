/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnamir <tnamir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:07:54 by tnamir            #+#    #+#             */
/*   Updated: 2022/02/16 17:07:54 by tnamir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		is_sorted(&list);
		all_cases(&list);
		free(list.b);
	}
	return (0);
}
