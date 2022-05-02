/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:14:17 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:28:07 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	make_chunk(t_stack *stack)
{
	int	size;
	int	ret;

	size = count_stack_size(stack);
	ret = 0.000000053 * (size * size) + 0.03 * size + 14.5;
	return (ret);
}

void	a_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*top;
	int		chunk;
	int		num;

	top = *stack_a;
	chunk = make_chunk(*stack_a);
	num = 0;
	while (*stack_a)
	{
		top = *stack_a;
		if (top->index <= num)
		{
			push(stack_b, stack_a, "pb");
			num++;
		}
		else if (top->index > num && top->index <= num + chunk)
		{
			push(stack_b, stack_a, "pb");
			rotate(stack_b, "rb");
			num++;
		}
		else if (top->index > (num + chunk))
			rotate(stack_a, "ra");
	}
}
