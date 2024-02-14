/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:58:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/14 14:57:36 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_big_stack(t_stack *a, t_stack *b)
// {

// }

void	put_on_top(t_stack *a, int n)
{
	int		i;
	t_ring	*temp;

	temp = a->first;
	while (a->first->index != n)
	{
		while (temp->index != n)
		{
			temp = temp->next;
			i++;
		}
		if (i >= a->large / 2)
			rotate_a(a);
		else
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
		{
			rotate_a(a);
			print_stack(a);
		}
		else if (temp->next->index == 2)
		{
			rev_rotate_a(a);
			print_stack(a);
		}
		if (a->first->index != 0)
		{
			swap(a);
			print_stack(a);
		}
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
	t_ring	*temp;

	put_on_top(a, 0);
	push_b(a, b);
	if (a->large == 4)
	{
		put_on_top(a, 1);
		push_b(a, b);
	}
	sort_3_stack(a);
	push_a(b, a);
	push_a(b, a);
}

void	sort_stack(t_stack *a, t_stack *b)
{
	t_ring	*temp;

	temp = a->first;
	if (list_len(a) <= 3)
		sort_max3_stack(a);
	else if (list_len(a) == 4 || list_len(a) == 5)
		sort_small_stack(a, b);
	else if (list_len(a) > 5)
		radix_sort(a, b);
	//printf("Stack al acabar\n");
	//print_stack(a);
}
