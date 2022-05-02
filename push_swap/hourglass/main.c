/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:11:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 12:45:52 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		exit(1);
	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	if (count_stack_size(stack_a) <= 5)
		hard_sort(&stack_a, &stack_b);
	else
	{
		a_to_b(&stack_a, &stack_b);
		b_to_a(&stack_a, &stack_b);
	}
	system("leaks push_swap | grep 'leaked bytes'");
	return (0);
}
