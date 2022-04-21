/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:59:20 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:34:12 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Test whether param is a 7bit character into the ASCII set.
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
