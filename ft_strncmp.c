/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 21:44:00 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/11 22:22:01 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		if (s1[i] != s2[i] || (s1[i] == '\0') || (s2[i] == '\0'))
			return (s1[i] - s2[i]);
		n--;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "hello kara";
	char *s2 = "hellA kara";

	int x = ft_strncmp(s1, s2, 11);

	printf("result is %d ", x);

	return (0);
}*/