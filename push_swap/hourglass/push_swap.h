/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:12:00 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 13:26:00 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

t_stack	*new_stack_elem(int input);
t_stack	*parse_input(int argc, char **argv);
int		is_stack_sorted(t_stack *stack);
void	add_elem_bottom(t_stack **stack, t_stack *new);
void	add_elem_top(t_stack **stack, t_stack *elem);
t_stack	*detach_elem(t_stack **stack);
int		is_stack_sorted(t_stack *stack);
void	push(t_stack **dst, t_stack **src, char *operation);
void	swap(t_stack **stack, char *operation);
void	rotate(t_stack **stack, char *operation);
void	r_rotate(t_stack **stack, char *operation);
void	hard_sort(t_stack **stack_a, t_stack **stack_b);
void	a_to_b(t_stack **stack_a, t_stack **stack_b);
void	b_to_a(t_stack **stack_a, t_stack **stack_b);
int		count_stack_size(t_stack *stack);
void	print_error(void);

#endif
