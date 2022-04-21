/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:03:35 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:35:26 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Test whether param is a printable character including space.
int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}
