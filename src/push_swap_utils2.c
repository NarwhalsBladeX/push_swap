/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:36:25 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/05/27 20:55:15 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_word_countv2(char const *s, char c)
{
	int	count;
	int	inword;

	inword = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !inword)
		{
			count++;
			inword = 1;
		}
		else if (*s == c)
			inword = 0;
		s++;
	}
	return (count);
}

void	ft_atoi_error_check(long res, int sign)
{
	if ((sign == 1 && res > INT_MAX) || (sign == -1 && res > (long)INT_MAX + 1))
		ft_error();
}

long	ft_parse_number(const char *nptr, int *i)
{
	long	res;

	res = 0;
	while (nptr[*i] && nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		res = res * 10 + (nptr[*i] - '0');
		(*i)++;
	}
	return (res);
}

int	ft_atoi2(const char *nptr)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	if (nptr[i] < '0' || nptr[i] > '9')
		ft_error();
	res = ft_parse_number(nptr, &i);
	ft_atoi_error_check(res, sign);
	if (nptr[i] != '\0')
		ft_error();
	return ((int)(res * sign));
}

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	if (stack->top == NULL || stack->top->next == NULL)
		return (1);
	while (current->next != NULL)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
