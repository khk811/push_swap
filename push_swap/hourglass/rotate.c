/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:24:26 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 13:59:11 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_stack **stack)
{
    *stack = (*stack)->next;
    printf("rotate\n");
}

void    r_rotate(t_stack **stack)
{
    *stack = (*stack)->prev;
    printf("r_rotate\n");
}