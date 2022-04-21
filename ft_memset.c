/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:39:36 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/21 09:00:15 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Fills param3 size pointed by param1 with param2.
// Return a pointer to the memory area of param1.
void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len-- > 0)
		*ptr++ = val;
	return (dest);
}
