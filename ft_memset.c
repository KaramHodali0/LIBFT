/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:10:45 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/09 15:09:43 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t i;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }

    return (ptr);
}
/*


SHOULD I ADD NULL TERMINATED OR NOT


#include <stdio.h>

int main()
{
    char str[10] = "hello";

    ft_memset(str, 'A', 10);

    printf("%s\n", str);
    return (0);
}*/