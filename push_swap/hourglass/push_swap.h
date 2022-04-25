/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:12:00 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 19:41:21 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

t_stack	*new_stack_elem(int input);
t_stack	*parse_input(int argc, char **argv);
int is_stack_sorted(t_stack *stack);
void	stack_push_back(t_stack **stack, t_stack *new);
void	push(t_stack **dst, t_stack **src, char *operation);
void	rotate(t_stack **stack, char *operation);
void	r_rotate(t_stack **stack, char *operation);
void	a_to_b(t_stack **stack_a, t_stack **stack_b);
void	b_to_a(t_stack **stack_a, t_stack **stack_b);
int		count_stack_size(t_stack *stack);
void	print_error(void);

#endif
