/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:19:38 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/18 12:46:20 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *l1;
// 	l1 = ft_lstnew("World");
// 	ft_lstadd_front(&l1, ft_lstnew("Hello"));
// 	while (l1)
// 	{
// 		printf("%s\n",l1 -> content);
// 		l1 = l1 -> next;
// 	}
// 	return (0);
// }