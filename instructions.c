/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:30:51 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/09 20:29:51 by mcallejo         ###   ########.fr       */
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
}
