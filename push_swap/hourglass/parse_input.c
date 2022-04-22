/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkkim <hyunkkim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 17:15:32 by hyunkkim          #+#    #+#             */
/*   Updated: 2022/04/22 20:08:02 by hyunkkim         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long   str_to_ll(char *s)
{
    long long   ret;
    long long   sign;

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

int is_str_int(char *s)
{
    long long   input;

    input = str_to_ll(s);
    if (input > 2147483647 || input < -2147483648)
        exit(1);
    // printf (".... ");
    return (input);
}

t_stack *parse_input(int argc, char **argv)
{
    t_stack *ret;
    int i;
    int value;

    i = 1;
    ret = NULL;
    while (i < argc)
    {
        value = is_str_int(argv[i]);
        stack_push_back(&ret, new_stack_elem(value));
        i++;
    }
    return (ret);
}