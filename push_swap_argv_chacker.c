/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_argv_chacker.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:16:14 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/06 23:54:44 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_is_int(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    while (j < argc)
    {
        i = 0;
        while(argv[j][i])
        {
            if(argv[j][0] == '-')
                i++;
            if(argv[j][i] < '0' && argv[j][i] > '9')
                return (1);
            i++;
        }
        j++;
    }
    return (0);
}

int check_duplicate(int argc, char **argv)
{
    int j;
    int i;
    
    j = 1;
    while(j < argc)
    {   
        i = j + 1;
        while(i < argc)
        {     
            if(ft_atoi(argv[j]) == ft_atoi(argv[i]))
                return (1);
            i++;
        }
        j++;
    }
    return (0);
}

int check_min_or_max(int argc, char **argv)
{
    int j;
    int i;

    j = 1;
    while(j < argc)
    {
        i = 0;
        while(argv[j][i] == '-' || argv[j][i] == '0')
            i++;
          
        if(ft_strlen(&argv[j][i]) > 10)
            return (1);
        else if(ft_strlen(&argv[j][i]) < 10)
            j++;                
        else if(argv[j][0] == '-')
        {
            if(ft_strncmp(argv[j], "-2147483648", 11) > 0)
                return (1);
        }
        else if(ft_strncmp(argv[j], "2147483647", 10) > 0)
            return (1);
    }
    return (0);
}

int argv_checker(int argc, char **argv)
{
    if(argc <= 2)
        return (1);
    if(check_is_int(argc, argv))
        return (0);
    if(check_duplicate(argc, argv))
        return (0);
    if(check_min_or_max(argc, argv))
        return (0);
    return (1);
}