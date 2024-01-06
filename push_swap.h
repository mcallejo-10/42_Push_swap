/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:22:21 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/06 22:42:12 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP 
#define PUSH_SWAP

#include <unistd.h>
#include <stdio.h>
#include <string.h>


// PUSH_SWAP //

// PUSH_SWAP_ARGV_CHECKER //
int argv_checker(int argc, char **argv);
int check_is_int(int argc, char **argv);
int check_duplicate(int argc, char **argv);


// UTILS_PUSH_SWAP //
size_t	ft_strlen(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);

#endif