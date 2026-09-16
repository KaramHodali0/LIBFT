/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 12:04:41 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/16 16:58:42 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char *s, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && s[i + 1] == (c || '\0'))
            count++;
        i++;
    }
    return (count);
}


char    **ft_split(char const *s, char c);

