/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcallejo <mcallejo@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:12:44 by mcallejo          #+#    #+#             */
/*   Updated: 2024/01/07 00:43:06 by mcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
    return (i);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		++s1;
		++s2;
		++i;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		num;
	int		mul;

	mul = 1;
	num = 0;
	while (*str == '\n' || *str == ' ' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-')
	{
		mul = mul * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * mul);
}