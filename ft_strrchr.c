/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 20:24:43 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/13 13:49:24 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

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