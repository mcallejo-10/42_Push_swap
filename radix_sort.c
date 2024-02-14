/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:22:24 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/14 18:33:51 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	push_to_a(t_stack *a, t_stack *b)
// {
// 	while (b->large >= 0)
// 		push_a(a, b);
// }

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
	printf("i: %i\n", i);
	while ((i >> n_bits & 1) != 1)
	{
		n_bits--;
	}
	return (n_bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int		bit_max;
	t_ring	*temp;

	temp = a->first;
	bit_max = count_max_bit(a);
	// bit_max++;
	printf("bit max: %i\n", bit_max);
	list_len(a);
	bit_max = 4;
	while (bit_max >= 0)
	{
		while (a->large > 0)
		{
			if ((temp->index >> bit_max & 1) == 0)
				push_b(a, b);
			else
				rotate_a(a);
			printf("Stack A\n");
			print_stack(a);
			printf("Stack B\n");
			print_stack(b);
			a->large--;
			printf("large: %i\n", a->large);
			temp = a->first;
		}
		//printf("b large: %i\n", b->large);
		while (b->large > 0)
			push_a(b, a);
		//printf("bit max: %i\n", bit_max);
		bit_max--;
	}
	printf("Stack A\n");
	print_stack(a);
	printf("Stack B\n");
	print_stack(b);
}
