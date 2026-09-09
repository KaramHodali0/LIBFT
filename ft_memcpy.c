/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 16:26:50 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/09 17:32:10 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *ptr_to_dest;
    const unsigned char *ptr_to_src;
    size_t i;

    i = 0;
    ptr_to_dest = (unsigned char *)dest;
    ptr_to_src = (const unsigned char *)src;

    while (i < n)
    {
        ptr_to_dest[i] = ptr_to_src[i];
        i++;
    }
    return (ptr_to_dest);
}

/*#include <stdio.h>

int main(void)
{
    char src[10] = "Hello bro";
    char dest[20];

    ft_memcpy(dest, src, 6);
    dest[6] = '\0';

    printf("src:  %s\n", src);
    printf("dest: %s\n", dest);

    return (0);
}*/