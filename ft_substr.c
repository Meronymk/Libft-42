/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:22:47 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 16:17:37 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocate memory of new string starting at param2 index with max size param3.
// Return new string.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (len > slen)
		len = slen;
	newstr = ft_calloc(sizeof(char), len + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < slen && j < len)
	{
		newstr[j] = s[i];
		i++;
		j++;
	}
	return (newstr);
}
