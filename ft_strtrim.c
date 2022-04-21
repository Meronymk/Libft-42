/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 08:50:05 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 16:14:27 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return where the start is.
static int	ft_movingup(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (s1[j] == set[i])
		{
			j++;
			i = 0;
			if (s1[j] == '\0')
				return (-1);
		}
		else
			i++;
	}
	return (j);
}

// Return where the end is.
static int	ft_movingdown(char const *s1, char const *set, int start)
{
	int	i;

	i = 0;
	start--;
	while (set[i])
	{
		if (s1[start] == set[i])
		{
			start--;
			i = 0;
		}
		else
			i++;
	}
	return (start);
}

// Allocate memory and return new array composed of param1 spliced with param2.
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*s2;
	int		strsize;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_movingup(s1, set);
	if (start == -1)
		return (ft_strdup(""));
	strsize = ft_strlen(s1);
	end = ft_movingdown(s1, set, strsize);
	s2 = malloc(sizeof(char) * (end - start + 1) + 1);
	if (s2 == NULL)
		return (NULL);
	while (start <= end)
	{
		s2[i] = s1[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
