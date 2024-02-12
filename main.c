/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:02:58 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/11 13:17:46 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	create_ring(t_stack *a, int argc, char **argv)
{
	int		j;
	int		first_flag;
	t_ring	*temp;
	t_ring	*new;

	j = 1;
	first_flag = 1;
	while (j < argc)
	{
		new = malloc(sizeof(t_ring) * 1);
		if (!new)
			return (0);
		new->value = ft_atoi(argv[j]);
		if (first_flag == 1)
		{
			a->first = new;
			first_flag = 0;
		}
		else
			temp->next = new;
		new->next = NULL;
		temp = new;
		j++;
	}
	return (0);
}

void	assign_index(t_stack *a, t_ring *node)
{
	t_ring	*first;
	t_ring	*temp;
	int		idx;

	first = node;
	while (node)
	{
		idx = 0;
		temp = first;
		while (temp)
		{
			if (temp->value < node->value)
				idx++;
			temp = temp->next;
		}
		node->index = idx;
		node = node->next;
	}
}

void	print_stack(t_stack *a)
{
	t_ring		*temp;

	temp = a->first;
	printf("Stack list\n");
	while (temp)
	{
		printf("value: %d\tindex: %d\n", temp->value, temp->index);
		temp = temp->next;
	}
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
	create_ring(&a, argc, argv);
	assign_index(&a, a.first);
	if (a_is_sorted(&a))
		return (0);
	list_len(&a);
	printf("a len: %d\n", a.large);
	list_len(&b);
	printf("b len: %d\n", b.large);
	printf("NO está ordenado, seguimos\n");
	print_stack(&a);
	rotate_a(&a);
	print_stack(&a);
	rev_rotate_a(&a);
	print_stack(&a);
	swap_a(&a);
	print_stack(&a);
	push_b(&a, &b);
	print_stack(&a);
	print_stack(&b);
	return (0);
}