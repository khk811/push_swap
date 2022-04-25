/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:43:18 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 21:46:59 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_max_index(t_stack *stack)
{
    int ret;
    int size;

    ret = stack->index;
    size = count_stack_size(stack);
    while (size--)
    {
        if (stack->index > ret)
            ret = stack->index;
        stack = stack->next;
    }
    return (ret);
}

void    sort_three(t_stack **stack)
{
    int max_index;

    max_index = find_max_index(*stack);
    if ((*stack)->index == max_index)
        rotate(stack, "ra");
    else if (((*stack)->next)->index == max_index)
        r_rotate(stack, "rra");
    if ((*stack)->index == max_index - 1)
        swap(stack, "sa");
}

void    push_low_index(t_stack **stack_a, t_stack **stack_b, int n)
{
    t_stack *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->index == n)
        {
            push(stack_b, stack_a, "pb");
            return ;
        }
        rotate(stack_a, "ra");
        tmp = *stack_a;
    }
}

void    sort_four_five(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    size = count_stack_size(*stack_a);
    if (size == 4 || size == 5)
        push_low_index(stack_a, stack_b, 0);
    if (size == 5)
        push_low_index(stack_a, stack_b, 1);
    sort_three(stack_a);
    while (*stack_b)
        push(stack_a, stack_b, "pa");
}

void    hard_sort(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    size = count_stack_size(*stack_a);
    if (size == 2)
        swap(stack_a, "sa");
    else if (size == 3)
        sort_three(stack_a);
    else if (size > 3)
        sort_four_five(stack_a, stack_b);
}