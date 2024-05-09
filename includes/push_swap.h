/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtcza <mwojtcza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:37:42 by mwojtcza          #+#    #+#             */
/*   Updated: 2024/05/04 19:14:53 by mwojtcza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>


typedef struct s_stack
{
	int				*data;
	int				top;
	int				size;
}	t_stack;
/*
typedef struct s_node
{
	int		datanode;
	int		*next;
}	t_node;
*/

void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	pa(t_stack *stackA, t_stack *stackB);
void	pb(t_stack *stackA, t_stack *stackB);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stackA, t_stack *stackB);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stackA, t_stack *stackB);

void	print_operation(char *operation);
void	push(t_stack *stack, int num);

void    sort3(t_stack **stack);
void    sortbig(t_stack **stackA, t_stack **stackB);

int	stack_init(int argc, char **argv, t_stack **stackA, t_stack **stackB);
int	check_duplicates(int num, int len);

#endif