/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:04:17 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:37:17 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_leninput(long input)
{
	size_t	len;
	int		isnegative;

	len = 0;
	isnegative = 0;
	if (input < 0)
	{
		len++;
		isnegative++;
		input = -input;
	}
	while (input >= 1)
	{
		len++;
		input /= 10;
	}
	return (len);
}

static char	*ft_mallocinput(char *c, long input, int len, int isnegative)
{
	if (input != 0)
		c = malloc(sizeof(char) * (len + 1));
	else
		return (c = ft_strdup("0"));
	if (!c)
		return (0);
	isnegative = 0;
	if (input < 0)
	{
		isnegative++;
		input = -input;
	}
	c[len] = '\0';
	while (--len)
	{
		c[len] = (input % 10) + '0';
		input /= 10;
	}
	if (isnegative == 1)
		c[0] = '-';
	else
		c[0] = (input % 10) + '0';
	return (c);
}

// Converts the param int to a char.
char	*ft_itoa(int n)
{
	int		len;
	char	*newchar;
	long	input;
	int		isnegative;

	input = n;
	len = ft_leninput(input);
	newchar = 0;
	isnegative = 0;
	newchar = ft_mallocinput(newchar, input, len, isnegative);
	if (newchar == NULL)
		return (0);
	return (newchar);
}
