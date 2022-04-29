/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:19:46 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/29 16:23:36 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*operation;

	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	operation = get_next_line(0);
	while (operation)
	{
		do_sort_op(&stack_a, &stack_b, operation);
		free(operation);
		operation = NULL;
		operation = get_next_line(0);
	}
	free(operation);
	operation = NULL;
	if (!stack_b && is_stack_sorted(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	system("leaks checker | grep 'leaked bytes' ");
	return (0);
}
