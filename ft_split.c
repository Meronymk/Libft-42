/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:26:57 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 15:28:02 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return param2 bytes of memory area from param1.
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// Free memory of param1.
char	**ft_freemem(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

// Return length of every instances param2 found in param1.
size_t	ft_wordcount(char const *s, char c)
{
	size_t	listlen;
	size_t	i;

	i = 0;
	listlen = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] && s[i + 1] != c))
			listlen++;
		i++;
	}
	return (listlen);
}

// Allocate memory for array using param1 splitted with param2.
// Return the new array.
char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	strlist = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!strlist)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[j])
	{
		while (s[j] == c)
			j++;
		temp = j;
		while (s[j] != c && s[j])
			j++;
		strlist[i] = ft_strndup(&s[temp], j - temp);
		if (strlist[i++] == 0)
			return (ft_freemem(strlist));
	}
	strlist[i] = NULL;
	return (strlist);
}
