/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 01:06:50 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/12 01:34:44 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    char *str;
    int sign;
    int number;

    str = (char *)nptr;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    sign = 0;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign++;
        str++;
    }

    number = 0;
    while (*str >= '0' && *str <= '9')
    {
        number = (number * 10) + *str - '0';
        str++;
    }
    if (sign % 2 != 0)
        number *= -1;
    return (number);
}
/*

I NEED TO REVIEW THE WHILE LOOP WHICE IS FOR THE SIGN.

#include <stdio.h>
int main () {
    int a;
    a = ft_atoi ("      -ggg367282");
    printf("%d" , a);
}*/