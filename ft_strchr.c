/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 19:50:51 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/11 21:21:49 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);

    return (NULL);
}

/*#include <stdio.h>

int main()
{
    char s[] = "watermelon and limon";
    char *result = ft_strchr(s, 'm');

    printf("Result: %s\n", result);
    return 0;
}*/