/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:20:49 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/28 18:18:56 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	attach_top_to_dst(t_stack **dst, t_stack *top)
{
	if (*dst == NULL)
	{
		*dst = top;
		top->prev = top;
		top->next = top;
	}
	else
	{
		top->prev = (*dst)->prev;
		top->next = *dst;
		(top->prev)->next = top;
		(top->next)->prev = top;
		*dst = top;
	}
}

void	detach_top_from_src(t_stack **src, t_stack *top)
{
	(top->prev)->next = top->next;
	(top->next)->prev = top->prev;
	if (top->next != top)
		*src = top->next;
	else
		*src = NULL;
}

void	push(t_stack **dst, t_stack **src, char *operation)
{
	t_stack	*top;

	if (!*src)
		return ;
	top = *src;
	detach_top_from_src(src, top);
	attach_top_to_dst(dst, top);
	ft_printf("%s\n", operation);
}
