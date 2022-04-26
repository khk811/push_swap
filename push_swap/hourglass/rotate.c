/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:24:26 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/26 17:16:58 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **stack, char *operation)
{
	*stack = (*stack)->next;
	ft_printf("%s\n", operation);
}

void	r_rotate(t_stack **stack, char *operation)
{
	*stack = (*stack)->prev;
	ft_printf("%s\n", operation);
}
