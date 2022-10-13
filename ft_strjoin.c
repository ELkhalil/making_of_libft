/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:29:44 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/13 09:04:57 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc (len_s1 + len_s2 + 1);
	if (!new_str)
		return (NULL);
	while (i < len_s1)
		new_str[i++] = *s1++;
	while (i < (len_s1 + len_s2))
		new_str[i++] = *s2++;
	new_str[i] = '\0';
	return (new_str);
}

/*
int main(int ac, char **av)
{
	(void)ac;
	printf("\n the new str is = |%s| \n",ft_strjoin(av[1],av[2]));	
	return (0);
}
*/