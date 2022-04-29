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

	top = *stack;
	if (!top)
		return ;
	if (top->next == top)
		return ;
	second = top->next;
	(top->prev)->next = second;
	(second->next)->prev = top;
	top->next = second->next;
	second->prev = top->prev;
	top->prev = second;
	second->next = top;
	*stack = second;
	ft_printf("%s\n", operation);
}
