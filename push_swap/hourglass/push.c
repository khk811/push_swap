/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:20:49 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/26 17:16:12 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dst, t_stack **src, char *operation)
{
	t_stack	*top;

	if (!*src)
		return ;
	top = *src;
	(top->prev)->next = top->next;
	(top->next)->prev = top->prev;
	if (top->next != top)
		*src = top->next;
	else
		*src = NULL;
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
	ft_printf("%s\n", operation);
}
