/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:08:07 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:29:32 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocate unused space for an array of param1 of size param2.
void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	mem_len;

	mem_len = n * size;
	ptr = malloc(mem_len);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, mem_len);
	return (ptr);
}
