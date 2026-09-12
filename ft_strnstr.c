/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 23:33:44 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/12 01:06:13 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	instead_while_counter;
	size_t	len_little;

	len_little = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < len)
	{
		c = 0;
		instead_while_counter = i;
		while (big[instead_while_counter] == little[c]
			&& instead_while_counter < len)
		{
			c++;
			instead_while_counter++;
			if (c == len_little)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char big[] = "Hello world";
	char little[] = "world";

	printf("%s\n", ft_strnstr(big, little, 11));
}*/