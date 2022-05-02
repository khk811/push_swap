/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:29:08 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:30:08 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dst, t_stack **src, char *operation)
{
	t_stack	*top;

	if (!*src)
		return ;
	top = detach_elem(src);
	add_elem_top(dst, top);
	ft_printf("%s\n", operation);
}

void	swap(t_stack **stack, char *operation)
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
	ft_printf("%s\n", operation);
}

void	rotate(t_stack **stack, char *operation)
{
	if (!*stack)
		return ;
	*stack = (*stack)->next;
	ft_printf("%s\n", operation);
}

void	r_rotate(t_stack **stack, char *operation)
{
	if (!*stack)
		return ;
	*stack = (*stack)->prev;
	ft_printf("%s\n", operation);
}
