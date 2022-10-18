/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:24:56 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/18 19:45:03 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp_head;

	if (!lst)
		return (NULL);
	tmp_head = lst;
	while (tmp_head->next != NULL)
		tmp_head = tmp_head -> next;
	return (tmp_head);
}
