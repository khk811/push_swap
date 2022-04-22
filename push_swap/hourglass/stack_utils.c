/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:55:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/22 19:43:24 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    stack_push_back(t_stack **stack, t_stack *new)
{
    t_stack *tmp;
    t_stack *last;

    if (!*stack)
    {
        *stack = new;
        return ;
    }
    tmp = *stack;
    last = (*stack)->prev;
    new->next = tmp;
    new->prev = last;
    tmp->prev = new;
    last->next = new;
    return ;
}