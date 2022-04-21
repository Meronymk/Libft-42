/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:38:13 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 16:01:45 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares param3 bytes of memory area of param1 with param2.
// if Return value < 0 then it indicates param1 is less than param2.
// if Return value > 0 then it indicates param2 is less than param1.
// if Return value = 0 then it indicates param1 is equal to param2.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > ft_strlen(s1))
		n = ft_strlen(s1) + 1;
	if (n > ft_strlen(s2))
		n = ft_strlen(s2) + 1;
	return (ft_memcmp(s1, s2, n));
}
