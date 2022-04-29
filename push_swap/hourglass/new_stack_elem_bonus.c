/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack_elem_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:46:41 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/29 14:11:18 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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
