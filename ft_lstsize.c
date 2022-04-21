/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 15:01:36 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:53:05 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return the number of elements in param1.
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp_lst;

	count = 0;
	temp_lst = lst;
	while (temp_lst != NULL)
	{
		temp_lst = temp_lst->next;
		count++;
	}
	return (count);
}
