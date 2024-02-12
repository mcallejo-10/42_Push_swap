/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:58:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/12 14:00:51 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_stack *a, t_stack *b)
{

}

void 	sort_small_stack(t_stack *a, t_stack *b)
{

}

void	sort_stack(t_stack *a, t_stack *b)
{
	if (list_len(&a) <= 5)
		sort_small_stack(&a, &b);
	else
		sort_big_stack(&a, &b);
}