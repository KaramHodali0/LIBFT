/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 20:24:43 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/11 21:17:11 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *start;

    start = s;
    while (*s != '\0')
        s++;
    if (c == *s)
        return ((char *)s);
    while (s != start)
    {
        if (*s == c)
            return ((char *)s);
        s--;
    }
    return (NULL);
}
/*

i did return ((char *)s); cuz the type of s is
const so i convert it to pointer var

#include <stdio.h>

int main()
{
    char s[] = "pew this is the poooo"; // 16 the last ones and 0 the first ones ;
    char *result = ft_strrchr(s, 'p');

    printf("the result is %s    .", result);
}*/