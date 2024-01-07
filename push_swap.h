/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:22:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/07 21:04:19 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP 
#define PUSH_SWAP

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_ring
{
    int             value;
    int             index;
    struct s_ring   *next;
}   t_ring;

typedef struct s_stack
{
    int             large;
    t_ring          *first;
    char            *name;
}   t_stack;

// PUSH_SWAP //
int main(int argc, char **argv);

// PUSH_SWAP_ARGV_CHECKER //
int argv_checker(int argc, char **argv);
int check_is_int(int argc, char **argv);
int check_duplicate(int argc, char **argv);
int check_min_or_max(int argc, char **argv);


// UTILS_PUSH_SWAP //
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);

#endif