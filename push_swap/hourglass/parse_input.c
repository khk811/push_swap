/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:15:32 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/25 16:37:44 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	str_to_ll(char *s)
{
	long long	ret;
	long long	sign;

	ret = 0;
	sign = 1;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
		sign = -1;
		s++;
	}
	while (*s && ft_isdigit(*s))
	{
		ret *= 10;
		ret += *s - '0';
		s++;
	}
	ret *= sign;
	return (ret);
}

int	is_str_int(char *s)
{
	long long	input;

	input = str_to_ll(s);
	if (input > 2147483647 || input < -2147483648)
		print_error();
	return (input);
}

void	convert_argv_str(char *s, t_stack **stack)
{
	char	**split_ret;
	int		i;
	int		value;

	split_ret = ft_split(s, ' ');
	i = 0;
	while (split_ret[i])
	{
		value = is_str_int(split_ret[i]);
		stack_push_back(stack, new_stack_elem(value));
		free(split_ret[i]);
		split_ret[i] = NULL;
		i++;
	}
	free(split_ret);
	split_ret = NULL;
}

t_stack	*parse_input(int argc, char **argv)
{
	t_stack	*ret;
	int		i;

	i = 1;
	ret = NULL;
	while (i < argc)
	{
		convert_argv_str(argv[i], &ret);
		i++;
	}
	return (ret);
}
