/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:16:18 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/15 11:33:52 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_counter;
	t_list	*tmp_head;

	tmp_head = lst;
	lst_counter = 0;
	while (tmp_head)
	{
		lst_counter++;
		tmp_head = tmp_head -> next;
	}
	return (lst_counter);
}
