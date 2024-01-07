/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:02:58 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/07 21:04:15 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_ring(t_stack a, int argc, char **argv)
{
	int		j;
	t_ring	*temp;
	t_ring	*new;

	j = argc;
	temp = malloc(sizeof(t_ring) * 1);
	temp->value = ft_atoi(argv[j]);
	temp->next = NULL;
	j--;
	while (j < argc)
	{
		temp = malloc(sizeof(t_ring) * 1);
		temp->value = ft_atoi(argv[j]);
		temp->next = new;
		new->next = NULL;
		j--;
	}
	//printf("%i\n", value);
	a.first = temp;
	
	return (0);
}

int main(int argc, char **argv)
{
	t_stack     a;
	t_stack     b;

	a.first = NULL;
	b.first = NULL;
	a.large = 0;
	b.large = 0;


	if(argv_checker(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return(0);
	}
	write(1, "Argv correct, seguim!\n", 22);
	create_ring(&a, argc, argv);
	return (0);
}