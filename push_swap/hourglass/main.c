/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:11:30 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 16:41:14 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	a_to_b(&stack_a, &stack_b);
	b_to_a(&stack_a, &stack_b);
	return (0);
}
