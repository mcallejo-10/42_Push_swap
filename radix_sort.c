/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:22:24 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/14 14:57:35 by mcallejo         ###   ########.fr       */
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
	printf("i: %i\n", i);
	while ((i >> n_bits & 1) != 1)
	{	
		printf("n_bit: %i\n", n_bits);	
		n_bits--;
	}

	return (n_bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	bit_max;

	bit_max = count_max_bit(a);
	//printf("bit max: %i\n", bit_max);
}
