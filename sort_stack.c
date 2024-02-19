/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:58:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/19 11:20:01 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_on_top(t_stack *a, int n)
{
	int		i;
	t_ring	*temp;

	i = 0;
	temp = a->first;
	while (temp->index != n)
	{
		temp = temp->next;
		i++;
	}
	if (i < a->large / 2)
	{
		while (a->first->index != n)
			rotate_a(a);
	}
	else
	{
		while (a->first->index != n)
			rev_rotate_a(a);
	}
}

void	sort_max3_stack(t_stack *a)
{
	t_ring	*temp;

	temp = a->first;
	if (list_len(a) <= 3)
	{
		if (a->first->index == 2)
			rotate_a(a);
		else if (temp->next->index == 2)
			rev_rotate_a(a);
		if (a->first->index != 0)
			swap(a);
	}
}

void	sort_3_stack(t_stack *a)
{
	t_ring	*temp;
	t_ring	*last;

	temp = a->first;
	last = a->first;
	last = last->next->next;
	temp = temp->next;
	if (a->first->index > temp->index && a->first->index > last->index)
		rotate_a(a);
	if (temp->index > a->first->index && temp->index > last->index)
		rev_rotate_a(a);
	if (a->first->index > a->first->next->index)
		swap(a);
}

void	sort_small_stack(t_stack *a, t_stack *b)
{
	put_on_top(a, 0);
	push_b(a, b);
	if (a->large == 4)
	{
		put_on_top(a, 1);
		push_b(a, b);
	}
	sort_3_stack(a);
	while (b->first)
		push_a(b, a);
}

void	sort_stack(t_stack *a, t_stack *b)
{
	if (a->large <= 3)
		sort_max3_stack(a);
	else if (a->large == 4 || a->large == 5)
		sort_small_stack(a, b);
	else if (a->large > 5)
		radix_sort(a, b);
}
