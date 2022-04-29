/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sort_op_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:08:35 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/29 21:33:56 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	do_push(t_stack **stack_a, t_stack **stack_b, char *op)
{
	if (ft_strncmp(op, "pa", 3) == 0)
		push(stack_a, stack_b);
	else if (ft_strncmp(op, "pb", 3) == 0)
		push(stack_b, stack_a);
	else
		print_error();
}

void	do_swap(t_stack **stack_a, t_stack **stack_b, char *op)
{
	if (ft_strncmp(op, "sa", 3) == 0)
		swap(stack_a);
	else if (ft_strncmp(op, "sb", 3) == 0)
		swap(stack_b);
	else if (ft_strncmp(op, "ss", 3) == 0)
	{
		swap(stack_a);
		swap(stack_b);
	}
	else
		print_error();
}

void	do_r_rotate(t_stack **stack_a, t_stack **stack_b, char *op)
{
	if (ft_strncmp(op, "rra", 4) == 0)
		r_rotate(stack_a);
	else if (ft_strncmp(op, "rrb", 4) == 0)
		r_rotate(stack_b);
	else if (ft_strncmp(op, "rrr", 4) == 0)
	{
		r_rotate(stack_a);
		r_rotate(stack_b);
	}
	else
		print_error();
}

void	do_rotates(t_stack **stack_a, t_stack **stack_b, char *op)
{
	if (ft_strncmp(op, "ra", 3) == 0)
		rotate(stack_a);
	else if (ft_strncmp(op, "rb", 3) == 0)
		rotate(stack_b);
	else if (ft_strncmp(op, "rr", 3) == 0)
	{
		rotate(stack_a);
		rotate(stack_b);
	}
	else
		print_error();
}

void	do_sort_op(t_stack **stack_a, t_stack **stack_b, char *op)
{
	if (ft_strncmp(op, "p", 1) == 0)
		do_push(stack_a, stack_b, op);
	else if (ft_strncmp(op, "s", 1) == 0)
		do_swap(stack_a, stack_b, op);
	else if (ft_strncmp(op, "r", 1) == 0)
	{
		if (ft_strlen(op) == 2)
			do_rotates(stack_a, stack_b, op);
		else if (ft_strlen(op) == 3)
			do_r_rotate(stack_a, stack_b, op);
		else
			print_error();
	}
	else
		print_error();
}
