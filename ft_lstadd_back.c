/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:34:19 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/18 21:20:28 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_last_node;

	if (!lst)
		ft_lstadd_front(lst, new);
	tmp_last_node = ft_lstlast(*lst);
	tmp_last_node -> next = new;
	new->next = NULL;
}

// void prin(t_list *pp)
// {
// 	t_list *p;
// 	p = pp;
// 	while (p)
// 	{
// 		printf("%s\n",(char *)p->content);
// 		p = p->next;
// 	}
// }
// int main()
// {
// 	t_list *e1;
// 	t_list *e2;
// 	t_list *e3;
// 	e1 = ft_lstnew(ft_strdup("Java"));
// 	e2 = ft_lstnew(ft_strdup("Joseph"));
// 	e3 = ft_lstnew(ft_strdup("python"));
// 	e1 -> next = e2;
// 	e2 -> next = e3;
// 	e3 -> next = NULL;
// 	//t_list *back;
// 	//back = ft_lstnew(ft_strdup("ana jdida"));
// 	//ft_lstadd_back(&e1,back);
// 	//prin(e1);
// 	//t_list *pp = ft_lstlast(e1);
// 	//t_list *ne;
// 	//ne = NULL;
// 	//ft_lstadd_back(&e1,back);
// 	printf("%d\n",ft_lstsize(e1));
// 	//printf("%s/n",(char *)pp->content);
// }
