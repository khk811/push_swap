/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:10:29 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 19:40:10 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_stack_sorted(t_stack *stack)
{
    t_stack *tmp;

    tmp = stack;
    while (tmp->next != stack)
    {
        if (tmp->value > (tmp->next)->value)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}