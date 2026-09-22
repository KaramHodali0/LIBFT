/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhouda <kalhouda@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 11:49:29 by kalhouda          #+#    #+#             */
/*   Updated: 2026/09/22 17:14:49 by kalhouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	get_length(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
	{
		count++;
	}
	return (count);
}

static char	*copy_word(const char *s, char c)
{
	size_t	len_of_word;
	size_t	i;
	char	*word;

	i = 0;
	len_of_word = get_length(s, c);
	word = malloc(len_of_word + 1);
	if (!word)
		return (NULL);
	while (i < len_of_word && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_split(char **str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**split_words;
	size_t	i;
	size_t	start;

	split_words = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!split_words)
		return (NULL);
	i = 0;
	start = 0;
	while (i < count_words(s, c))
	{
		split_words[i] = copy_word(s + start, c);
		if (!split_words[i])
		{
			free_split(split_words, i);
			return (NULL);
		}
		start += get_length(s + start, c);
		while (s[start] == c)
			start++;
		i++;
	}
	split_words[i] = NULL;
	return (split_words);
}
