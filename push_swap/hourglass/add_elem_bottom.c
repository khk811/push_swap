/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_elem_bottom.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:55:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:22:46 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_elem_index(t_stack *elem1, t_stack *elem2)
{
	if (elem1->value == elem2->value)
		print_error();
	else if (elem1->value > elem2->value)
		elem1->index++;
	else if (elem1->value < elem2->value)
		elem2->index++;
}

t_stack	*modify_stack_index(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next != *stack)
	{
		assign_elem_index(tmp, new);
		tmp = tmp->next;
	}
	assign_elem_index(tmp, new);
	return (tmp);
}

void	add_elem_bottom(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	last = modify_stack_index(stack, new);
	new->next = tmp;
	new->prev = last;
	tmp->prev = new;
	last->next = new;
	return ;
}
