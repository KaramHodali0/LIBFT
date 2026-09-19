/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:57:59 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/17 23:49:19 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t length_of_number(long n)
{
    size_t counter;

    counter = 0;
    while (n > 0)
    {
        n /= 10;
        counter++;
    }
    return (counter);
}

char *ft_itoa(int n)
{
    long nu;
    size_t len;
    char *res;
    size_t temp;

    nu = n;
    len = length_of_number(nu);
    if (nu < 0)
    {
        nu = -nu;
        len++;
    }
    res = malloc(len + 1);
    temp = len;
    while (len > 0)
    {
        res[len - 1] = (nu % 10) + '0';
        nu /= 10;
        len--;
    }
    res[temp] = '\0';
    return (res);
}
#include <stdio.h>
int main()
{
    char *s = ft_itoa(-89378945);
    printf("this is result  :    %s", s);

    return (0);
}