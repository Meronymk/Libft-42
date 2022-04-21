/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:27:16 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 16:18:00 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert lowercase alpha char to a uppercase alpha char.
// Return new char.
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
