/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:02:12 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 15:18:46 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Write string of param1 in file descriptor of param2.
void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}
