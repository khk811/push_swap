/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:47:33 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/28 21:19:14 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_until(t_stack **stack, t_stack *target, char *operation)
{
	if (ft_strncmp(operation, "rb", 2) == 0)
	{
		while (target != *stack)
			rotate(stack, "rb");
	}
	else
	{
		while (target != *stack)
			r_rotate(stack, "rrb");
	}
}

void	b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int		size;
	int		location;
	t_stack	*tmp;

	tmp = *stack_b;
	size = count_stack_size(*stack_b) - 1;
	location = 0;
	while (tmp)
	{
		if (tmp->index == size)
		{
			if (location < (size / 2))
				rotate_until(stack_b, tmp, "rb");
			else
				rotate_until(stack_b, tmp, "rrb");
			push(stack_a, stack_b, "pa");
			size--;
			tmp = *stack_b;
			location = 0;
		}
		if (tmp)
			tmp = tmp->next;
		location++;
	}
}
