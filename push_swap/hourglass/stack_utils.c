/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:55:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 16:01:28 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack  *put_index(t_stack **stack, t_stack *new)
{
    t_stack *tmp;

    tmp = *stack;
    while (tmp->next != *stack)
    {
        if (tmp->value == new->value)
            print_error();
        else if (tmp->value > new->value)
            tmp->index++;
        else if (tmp->value < new->value)
            new->index++;
        tmp = tmp->next;
    }
    if (tmp->value == new->value)
        print_error();
    else if (tmp->value > new->value)
        tmp->index++;
    else if (tmp->value < new->value)
        new->index++;
    return (tmp);
}

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
    last = put_index(stack, new);
    new->next = tmp;
    new->prev = last;
    tmp->prev = new;
    last->next = new;
    return ;
}