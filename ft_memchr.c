/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:47:03 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/21 08:59:32 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// scan param3 size of param2 in param1.
// Return a pointer to the matching byte or NULL if the character
// does not occur in the given memory area.
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	i = 0;
	string = (void *)s;
	while (i < n)
	{
		if (string[i] == (char)c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
