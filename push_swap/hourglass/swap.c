/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:50:15 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:17:17 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
