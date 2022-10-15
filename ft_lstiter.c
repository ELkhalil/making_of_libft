/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:09:56 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/15 09:13:30 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_header;

	tmp_header = lst;
	while (tmp_header != NULL)
	{
		f(tmp_header->content);
		tmp_header = tmp_header->next;
	}
}
