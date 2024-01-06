/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:02:58 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/07 00:43:08 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ring  create_ring(int argc, char **argv)
{
    t_ring  *first;
    int     value;
    
    first = malloc(sizeof(t_ring));
    
    first->value = value;
    value = ft_atoi(argv[1]);
    printf("%i\n", value);
    
    return (*first);
}

int main(int argc, char **argv)
{
    t_stack     *a;
    t_stack     *b;

    if(argv_checker(argc, argv) == 0)
    {
        write(1, "Error\n", 6);
        return(0);
    }
    write(1, "Argv correct, seguim!\n", 22);
    create_ring(argc, argv);
    return (0);
}