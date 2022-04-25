/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:47:33 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 16:35:39 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			{
				while (tmp != *stack_b)
					rotate(stack_b, "rb");
			}
			else
			{
				while (tmp != *stack_b)
					r_rotate(stack_b, "rrb");
			}
			push(stack_a, stack_b, "pa");
			size--;
			if (*stack_b == NULL)
				break ;
			tmp = *stack_b;
			location = 0;
		}
		tmp = tmp->next;
		location++;
	}
}
