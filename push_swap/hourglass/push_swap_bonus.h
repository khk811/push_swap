/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:20:46 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/29 19:55:29 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "libft.h"
# include "ft_printf.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

//char	*trim_nl(char **s);
t_stack	*new_stack_elem(int input);
t_stack	*parse_input(int argc, char **argv);
void	do_sort_op(t_stack **stack_a, t_stack **stack_b, char *op);
int		is_stack_sorted(t_stack *stack);
void	stack_push_back(t_stack **stack, t_stack *new);
void	push(t_stack **dst, t_stack **src);
void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	r_rotate(t_stack **stack);
int		count_stack_size(t_stack *stack);
void	print_error(void);

#endif
