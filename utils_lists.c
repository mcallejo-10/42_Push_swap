/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:36:41 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/10 18:58:39 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_len(t_stack *stack)
{
	t_ring	*temp;
	int		i;

	if (stack->first == NULL)
		return (0);
	temp = stack->first;
	i = 0;
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	stack->large = i + 1;
	return (i);
}