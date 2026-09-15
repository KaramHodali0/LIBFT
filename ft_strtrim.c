/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 15:22:14 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/16 02:30:09 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *result;
	char *last;

	result = (char *)s1;

	while (ft_strchr(set, *result) != NULL)
		result++;

	// 	last = result;
	// 	while (*last != '\0')
	// 		last++;

	// 	while (ft_strrchr(set, *last) != NULL)
	// 		last++;

	// 	last = result;
	// 	return (last);
	// }
	// #include <stdio.h>
	int main()
	{
		char *str = "*+****++++***this is*enought** bro++*+*";
		char *result = ft_strtrim(str, "+*");

		printf("RESULT IS  :  %s.   ", result);
	}
