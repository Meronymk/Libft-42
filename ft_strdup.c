/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:35:28 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 15:30:32 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return a pointer to a new string which is a duplicate of param1.
// Note: memory of the new string was allocated with malloc.
char	*ft_strdup(const char *str)
{
	char	*str_;
	char	*cpy;

	str_ = (char *)malloc(ft_strlen(str) + 1);
	if (str_ == NULL)
		return (NULL);
	cpy = str_;
	while (*str)
	*str_++ = *(char *)str++;
	*str_ = '\0';
	return (cpy);
}
