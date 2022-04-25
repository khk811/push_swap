/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:14:17 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/22 21:34:54 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_stack_size(t_stack *stack)
{
    t_stack *tmp;
    int ret;

    tmp = stack;
    ret = 0;
    while (tmp->next != stack)
    {
        ret++;
        tmp = tmp->next;
    }
    ret++;
    return (ret);
}

int make_chunk(t_stack *stack)
{
    int size;
    int ret;

    size = count_stack_size(stack);
    ret = 0.000000053 * (size * size) +  0.03 * size + 14.5;
    return (ret);
}

void    a_to_b(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *top;
    int chunk;
    int num;
    int a_size;

    top = *stack_a;
    chunk = make_chunk(*stack_a);
    num = 0;
    a_size = count_stack_size(*stack_a);
    while (a_size--)
    {
        top = *stack_a;
        if (!top)
            break ;
        if (top->index <= num)
        {
            push(stack_b, stack_a);
            printf("pb\n");
            num++;
        }
        else if (top->index > num && top->index <= num + chunk )
        {
            push(stack_b, stack_a);
            printf("pb\n");
            rotate(stack_b);
            printf("rb\n");
            num++;
        }
        else if (top->index > (num + chunk))
        {
            rotate(stack_a);
            printf("ra\n");
        }
    }
}