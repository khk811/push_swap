/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:11:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/26 17:14:33 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	if (count_stack_size(stack_a) <= 5)
		hard_sort(&stack_a, &stack_b);
	else
	{
		a_to_b(&stack_a, &stack_b);
		b_to_a(&stack_a, &stack_b);
	}
	/*
	int	i;
	t_stack	*tmp;
	i = 0;
	tmp = stack_a;
	while (i < argc)
	{
		printf("stack_a[%d]: %d (idx - %d)\n", i, stack_a->value, stack_a->index);
		stack_a = stack_a->next;
		if (stack_a == tmp)
			break ;
		i++;
	}*/
	//system("leaks push_swap");
	return (0);
}
