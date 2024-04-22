/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:24:42 by alaalalm          #+#    #+#             */
/*   Updated: 2023/11/15 20:18:37 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c, size_t slen)
{
	size_t	i;
	size_t	old_i;
	size_t	count;

	count = 0;
	i = 0;
	while (i < slen)
	{
		while (i < slen && str[i] == c)
			i++;
		old_i = i;
		while (i < slen && str[i] != c)
			i++;
		if (i > old_i)
			count++;
	}
	return (count);
}

static void	*free_s(char **string, int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		free(string[i]);
		string[i] = NULL;
		i++;
	}
	free(string);
	string = NULL;
	return (NULL);
}

static void	*subs(char const *s, char c, size_t slen, char **strings)
{
	size_t	i;
	size_t	j;
	size_t	index;
	char	buffer[255];

	index = 0;
	i = 0;
	while (i < slen)
	{
		while (i < slen && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (i < slen && s[i] != c)
			buffer[j++] = s[i++];
		buffer[j] = '\0';
		strings[index] = ft_strdup(buffer);
		if (!strings[index])
			return (free_s(strings, (index - 1)));
		index++;
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	size_t	slen;
	char	**strings;
	int		count_w;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	count_w = count_word(s, c, slen);
	strings = (char **)malloc(sizeof(char *) * (count_w + 1));
	if (!strings)
		return (NULL);
	if (!subs(s, c, slen, strings))
		return (NULL);
	strings[count_w] = NULL;
	return (strings);
}
