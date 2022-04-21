/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:02:16 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 10:27:06 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Erases the data by writing null char in param1 for param2 lenght.
void	*ft_bzero(void *dest, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len-- > 0)
		*ptr++ = '\0';
	return (dest);
}
