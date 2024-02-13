/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:22:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/02/13 19:43:18 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_ring
{
	int				value;
	int				index;
	struct s_ring	*next;
}	t_ring;

typedef struct s_stack
{
	int				large;
	t_ring			*first;
	char			*name;
}	t_stack;

// MAIN //
int		main(int argc, char **argv);
int		create_ring(t_stack *a, int argc, char **argv);
void	assign_index(t_stack *a, t_ring *node);

// PUSH_SWAP_ARGV_CHECKER //
int		argv_checker(int argc, char **argv);
int		check_is_int(int argc, char **argv);
int		check_duplicate(int argc, char **argv);
int		check_min_or_max(int argc, char **argv);
int		a_is_sorted(t_stack *a);

// UTILS_PUSH_SWAP //
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);

// 	UTILS_LISTS //
int		list_len(t_stack *stack);
void	print_stack(t_stack *a);
t_ring	*ps_lstlast(t_ring *last);

// INSTRUCTIONS //
void	rev_rotate_a(t_stack *a);
void	rotate_a(t_stack *a);
void	swap(t_stack *stack);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *b, t_stack *a);

// SORT STACK //
void	sort_stack(t_stack *a, t_stack *b);
void	sort_small_stack(t_stack *a, t_stack *b);
void	sort_max3_stack(t_stack *a);
void	sort_3_stack(t_stack *a);
//void	sort_big_stack(t_stack *a, t_stack *b);

#endif 