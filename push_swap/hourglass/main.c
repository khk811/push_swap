/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:11:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/22 21:08:23 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int i;
    t_stack *tmp;

    stack_a = parse_input(argc, argv);
    stack_b = NULL;
    //sort?(stack_a, stack_b);
    i = 0;
    push(&stack_b, &stack_a);
    tmp = stack_a;
    while (i < argc)
    {
        printf("stack_a[%d] : %d , idx: %d\n", i, stack_a->value, stack_a->index);
        stack_a = stack_a->next;
        if (stack_a == tmp)
            break ;
        i++;
    }
    printf("----\n");
    i = 0;
    tmp = stack_b;
    while (i < argc)
    {
        printf("stack_b[%d] : %d , idx: %d\n", i, stack_b->value, stack_b->index);
        stack_b = stack_b->next;
        if (stack_b == tmp)
            break ;
        i++;
    }
    return (0);
}