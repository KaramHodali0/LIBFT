/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 23:11:45 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/13 01:12:33 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *k;
    unsigned char *j;

    i = 0;
    k = (unsigned char *)s1;
    j = (unsigned char *)s2;
    while (i < n)
    {
        if (k[i] != j[i])
            return (j[i] - k[i]);
        i++;
    }
    return (0);
}
/*
#include <stdio.h>

int main()
{
    char *s1 = "hello";
    char *s2 = "hello";

    printf("%d\n", ft_memcmp(s1, s2, 5));
    return (0);
}*/