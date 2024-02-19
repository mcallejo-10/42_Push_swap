/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:22:24 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/19 11:21:00 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_max_bit(t_stack *a)
{
	int		i;
	int		n_bits;
	t_ring	*temp;

	i = -1;
	temp = a->first;
	while (temp->next)
	{
		if (i < temp->index)
			i = temp->index;
		temp = temp->next;
	}
	if (i < temp->index)
		i = temp->index;
	n_bits = 31;
	while ((i >> n_bits & 1) != 1)
	{
		n_bits--;
	}
	return (n_bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int		bit_max;
	int		i;
	int		bit;

	bit_max = count_max_bit(a);
	list_len(a);
	bit = 0;
	while (bit <= bit_max)
	{
		i = a->large;
		while (i > 0)
		{
			if (((a->first->index >> bit) & 1) == 0)
				push_b(a, b);
			else if (((a->first->index >> bit) & 1) == 1)
				rotate_a(a);
			i--;
		}
		while (b->large > 0)
			push_a(b, a);
		bit++;
	}
}
