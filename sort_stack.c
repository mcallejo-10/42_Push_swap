/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:58:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/13 14:41:33 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_big_stack(t_stack *a, t_stack *b)
// {

// }

void	sort_max3_stack(t_stack *a)
{
	t_ring	*temp;

	temp = a->first;
	if (list_len(a) <= 3)
	{
		printf("a len: %d\n", a->large);
		printf("a len: %d\n", a->first->index);
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

void	sort_small_stack(t_stack *a, t_stack *b)
{
	t_ring	*temp;

	temp = a->first;
	while (a->large > 3)
	{
		push(a, b);
		a->large--;
		write(1, "pa\n", 4);
		print_stack(a);
		print_stack(b);
		printf("a len: %d\n", a->large);
	}
}

void	sort_stack(t_stack *a, t_stack *b)
{
	t_ring	*temp;

	temp = a->first;
	if (list_len(a) <= 3)
		sort_max3_stack(a);
	else if (list_len(a) <= 5)
	// else
	// 	sort_big_stack(&a, &b);
}
