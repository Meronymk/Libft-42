/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:16:08 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/21 09:00:06 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy param3 size of param2 to memory area of param1.
// Note: memory area may overlap.
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char				*str;
	const unsigned char	*ptr_const;
	size_t				i;

	i = 0;
	str = dest;
	ptr_const = src;
	if (!dest && !src)
		return (dest);
	if (dest < src)
	{
		while (i++ < len)
		*str++ = *ptr_const++;
	}
	else
	{
		str += len;
		ptr_const += len;
		while (len-- != 0)
		*--str = *--ptr_const;
	}
	return (dest);
}
