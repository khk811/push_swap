/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:50:15 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/29 21:26:52 by hyunkkim         ###   ########seoul.kr  */
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
	attach_elem(stack, top);
	attach_elem(stack, second);
	ft_printf("%s\n", operation);
}
