/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 13:14:03 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:39:23 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add element param2 to the end of param1 list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_lst;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp_lst = *lst;
		while (temp_lst->next != NULL)
			temp_lst = temp_lst->next;
		temp_lst->next = new;
	}
}
