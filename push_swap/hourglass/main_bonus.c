/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:19:46 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 14:53:11 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		exit(1);
	stack_a = parse_input(argc, argv);
	stack_b = NULL;
	parse_operation(&stack_a, &stack_b);
	if (!stack_b && is_stack_sorted(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	return (0);
}
