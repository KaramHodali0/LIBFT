/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 21:20:40 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/12 23:06:06 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char *p;

    i = 0;
    p = (char *)s;
    while (i < n)
    {
        if (p[i] == c)
            return ((void *)&p[i]);
        i++;
    }
    return (NULL);
}
/*
#include <stdio.h>

int main()
{
    char *p = "hello world";
    char *h = ft_memchr(p, 'w', 11);

    printf("result is %s .", h);
    return (0);
}*/