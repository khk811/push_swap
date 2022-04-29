/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:24:26 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/29 21:23:48 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rotate(t_stack **stack)
{
	if (!*stack)
		return ;
	*stack = (*stack)->next;
}

void	r_rotate(t_stack **stack)
{
	if (!*stack)
		return ;
	*stack = (*stack)->prev;
}