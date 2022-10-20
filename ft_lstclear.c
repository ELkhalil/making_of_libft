/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:05:42 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/20 16:50:08 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_lst;

	if (lst && del)
	{
		while (*lst)
		{
			tmp_lst = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp_lst;
		}	
	}
}
