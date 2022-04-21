/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krochefo <krochefo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:05:57 by krochefo          #+#    #+#             */
/*   Updated: 2022/04/14 14:50:46 by krochefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterate with function param2 on every element of param1.
// Return new list and use param3 to delete if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstcpy;
	t_list	*newlist;
	t_list	*newtemplist;

	lstcpy = lst;
	newlist = NULL;
	while (lstcpy)
	{
		newtemplist = ft_lstnew(f(lstcpy->content));
		if (newtemplist == NULL)
		{
			ft_lstclear(&newlist, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&newlist, newtemplist);
		lstcpy = lstcpy->next;
	}
	newtemplist = NULL;
	return (newlist);
}
