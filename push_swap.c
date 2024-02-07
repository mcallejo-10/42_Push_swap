/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:02:58 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/07 18:15:00 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_ring(t_stack a, int argc, char **argv)
{
	int		j;
	int		first_flag;
	t_ring	*temp;
	t_ring	*new;

	temp = new;
	first_flag = 1;
	while (j < argc)
	{
		new = malloc(sizeof(t_ring) * 1);
		new->value = ft_atoi(argv[j]);
		j++;
		if (first_flag == 1)
		{
			a.first = new;
			first_flag = 0;
		}
		else
			
	}
	new->next = NULL;
	temp->next = new;
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack		a;
	t_stack		b;

	a.first = NULL;
	b.first = NULL;
	a.large = 0;
	b.large = 0;
	if (argv_checker(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	write(1, "Argv correct, seguim!\n", 22);
	create_ring(a, argc, argv);
	return (0);
}
