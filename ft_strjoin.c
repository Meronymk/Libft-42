/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:39:37 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 16:20:21 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocate memory and return new concatenated param1 + param 2.
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	newstr_len;
	char	*newstr;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen(s2);
	newstr_len = s1_len + s2_len + 1;
	newstr = (char *)malloc(sizeof(char) * newstr_len);
	if (!newstr)
		return (0);
	ft_memmove(newstr, s1, s1_len);
	ft_memmove(newstr + s1_len, s2, s2_len);
	newstr[newstr_len - 1] = '\0';
	return (newstr);
}
