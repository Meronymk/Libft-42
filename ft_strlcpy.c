/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:18:59 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 15:54:51 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return the combined length of both param1 and param2
// with param3 length buffer.
unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[res] != 0 && res < (size -1))
		{
			dest[res] = src[res];
			res++;
		}
		dest[res] = '\0';
	}
	return (i);
}
