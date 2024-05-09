/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:51:44 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/05/04 19:34:37 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

void    sort3(t_stack **stack)
{
    int a;
    int b;
    int c;

    a = (*stack)->data[(*stack)->top];
    b = (*stack)->data[(*stack)->top - 1];
    c = (*stack)->data[(*stack)->top - 2];
    if (a < b && b < c)
        return ;
    if (a < b && b > c && a < c)
    {
        rra(*stack);
        sa(*stack);
        return ;
    }
    if (a > b && b < c && a < c)
    {
        sa(*stack);
        return ;
    }
    if (a < b && b > c && a > c)
    {
        rra(*stack);
        return ;
    }
    if (a > b && b < c && a > c)
    {
        ra(*stack);
        return ;
    }
    if (a > b && b > c && a > c)
    {
        ra(*stack);
        sa(*stack);
        return ;
    }
}