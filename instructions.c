/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:30:51 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/13 14:29:08 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_stack *a)
{
	t_ring	*temp;
	t_ring	*last;

	temp = a->first;
	last = a->first;
	if (a == NULL || a->first == NULL)
		return ;
	while (temp->next != NULL)
	{
		last = temp;
		temp = temp->next;
	}
	last->next = NULL;
	temp->next = a->first;
	a->first = temp;
	write(1, "rra\n", 5);
}

void	rotate_a(t_stack *a)
{
	t_ring	*temp;
	t_ring	*last;

	temp = a->first;
	last = a->first;
	if (a == NULL || a->first == NULL)
		return ;
	while (last->next != NULL)
	{
		last = last->next;
	}
	a->first = temp->next;
	last->next = temp;
	temp->next = NULL;
	write(1, "ra\n", 4);
}

void	swap(t_stack *stack)
{
	t_ring	*temp;
	t_ring	*swap;

	temp = stack->first;
	swap = stack->first;
	temp = temp->next;
	swap->next = temp->next;
	temp->next = swap;
	stack->first = temp;
	write(1, "sa\n", 4);
}

void	push(t_stack *from, t_stack *to)
{
	t_ring	*temp;

	temp = from->first;
	from->first = temp->next;
	if (to->first == NULL)
		temp->next = NULL;
	else
		temp->next = to->first;
	to->first = temp;
}
