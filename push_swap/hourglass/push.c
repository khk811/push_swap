/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:20:49 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:17:11 by hyunkkim         ###   ########seoul.kr  */
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
