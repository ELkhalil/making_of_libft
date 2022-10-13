/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:59:05 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/13 08:27:59 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char    *sub_str;
	size_t     i;
		
	i = 0;
	if (!s || !start)
		return (NULL);
	sub_str = malloc ((start + len) + 1);
	if (!sub_str)
		return (NULL);
	while (s[start] && i < len)
    {
       sub_str[i] = s[start];
	   i++;
	   start++;
    }
	return (sub_str);    
}

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("the substring is = |%s|\n",ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}