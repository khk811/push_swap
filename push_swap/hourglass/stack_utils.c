/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:55:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:27:49 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack_elem(int input)
{
	t_stack	*ret;

	ret = ft_calloc(1, sizeof(t_stack));
	if (!ret)
		exit(1);
	ret->index = 0;
	ret->value = input;
	ret->prev = ret;
	ret->next = ret;
	return (ret);
}

void	add_elem_top(t_stack **stack, t_stack *elem)
{
	if (*stack)
	{
		elem->prev = (*stack)->prev;
		elem->next = *stack;
		(elem->prev)->next = elem;
		(elem->next)->prev = elem;
	}
	*stack = elem;
}

t_stack	*detach_elem(t_stack **stack)
{
	t_stack	*target;

	target = *stack;
	(target->prev)->next = target->next;
	(target->next)->prev = target->prev;
	if (target->next != target)
		*stack = target->next;
	else
		*stack = NULL;
	target->prev = target;
	target->next = target;
	return (target);
}

int	count_stack_size(t_stack *stack)
{
	t_stack	*tmp;
	int		ret;

	tmp = stack;
	ret = 0;
	while (tmp->next != stack)
	{
		ret++;
		tmp = tmp->next;
	}
	ret++;
	return (ret);
}

int	is_stack_sorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next != stack)
	{
		if (tmp->value > (tmp->next)->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
