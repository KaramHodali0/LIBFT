/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 15:31:24 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/10 14:22:47 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			x;

	ptr = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		ptr[x] = '\0';
		x++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char s[] = "abcdef";
	ft_bzero(s, 1);
	printf(" 0 : %c\n "  ,s[0]);
		printf(" 1 : %c\n "  ,s[1]);
		printf(" 2 : %c\n "  ,s[2]);

}*/
