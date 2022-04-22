/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:12:00 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/22 19:56:55 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft.h"

typedef struct  s_stack
{
    int value;
    int index;
    struct s_stack  *prev;
    struct s_stack  *next;
}   t_stack;

t_stack *new_stack_elem(int input);
t_stack *parse_input(int argc, char **argv);
void    stack_push_back(t_stack **stack, t_stack *new);

#endif