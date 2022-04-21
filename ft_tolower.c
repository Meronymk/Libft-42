/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:32:37 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 16:17:50 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Convert uppercase alpha char to a lowercase alpha char.
// Return new char.
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
