/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:09:56 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/26 22:01:39 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_head;

	if (lst && f)
	{
		tmp_head = lst;
		while (tmp_head != NULL)
		{
			f(tmp_head->content);
			tmp_head = tmp_head->next;
		}
	}
}
