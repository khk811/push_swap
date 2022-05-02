/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:54:01 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 14:04:05 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	push(t_stack **dst, t_stack **src)
{
	t_stack	*top;

	if (!*src)
		return ;
	top = detach_elem(src);
	add_elem_top(dst, top);
}

void	swap(t_stack **stack)
{
	t_stack	*top;
	t_stack	*second;

	if (!*stack)
		return ;
	if ((*stack)->next == (*stack))
		return ;
	top = detach_elem(stack);
	second = detach_elem(stack);
	add_elem_top(stack, top);
	add_elem_top(stack, second);
}

void	rotate(t_stack **stack)
{
	if (!*stack)
		return ;
	*stack = (*stack)->next;
}

void	r_rotate(t_stack **stack)
{
	if (!*stack)
		return ;
	*stack = (*stack)->prev;
}
