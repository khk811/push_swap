/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_operation_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:07:11 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/05/02 14:07:12 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*trim_nl(int fd)
{
	char	*input;
	char	*ret;

	input = get_next_line(fd);
	ret = ft_strtrim(input, "\n");
	free(input);
	input = NULL;
	return (ret);
}

void	parse_operation(t_stack **stack_a, t_stack **stack_b)
{
	char	*operation;

	operation = trim_nl(0);
	while (operation)
	{
		do_sort_op(stack_a, stack_b, operation);
		free(operation);
		operation = NULL;
		operation = trim_nl(0);
	}
	free(operation);
	operation = NULL;
}
