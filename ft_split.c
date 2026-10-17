/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysihame <ysihame@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:20:51 by ysihame           #+#    #+#             */
/*   Updated: 2026/10/16 12:49:42 by ysihame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	free_all(char **tray, size_t j)
{
	while (j > 0)
	{
		j--;
		free(tray[j]);
	}
	free(tray);
	return (0);
}

static int	fill_words(char **tray, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tray[j] = ft_substr(s, start, i - start);
			if (!tray[j])
				return (free_all(tray, j));
			j++;
		}
	}
	tray[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tray;

	if (!s)
		return (NULL);
	tray = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tray)
		return (NULL);
	if (!fill_words(tray, s, c))
		return (NULL);
	return (tray);
}
