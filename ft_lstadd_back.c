/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:34:19 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/15 08:39:50 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list  *tmp_last_node;

	tmp_last_node = ft_lstlast(*lst);
	tmp_last_node ->next = new;
	new->next = NULL;
}