/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:43:18 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 20:49:28 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_stack **stack)
{
    if ((*stack)->index == 2)
        rotate(stack, "ra");
    else if (((*stack)->next)->index == 2)
        r_rotate(stack, "rra");
    if ((*stack)->index == 1)
        swap(stack, "sa");
}

void    hard_sort(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    size = count_stack_size(*stack_a);
    if (size == 2)
        swap(stack_a, "sa");
    else if (size == 3)
        sort_three(stack_a);
    if (!stack_b)
        printf("!!\n");
    //else if (size < 3)
    //    sort_four_five(stack_a, stack_b);
}