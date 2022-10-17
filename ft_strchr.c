/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:25:50 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/17 14:28:05 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_c;
	int		i;

	i = 0;
	c_c = (char )c;
	while (s[i] && s[i] != c_c)
		i++;
	if (s[i] == '\0' && c_c != s[i])
		return (NULL);
	return ((char *)&s[i]);
}
// int main(void)
// {
// 	// char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//  	// char *d1 = strchr(src, 't');
// 	// char *d2 = ft_strchr(src, 't');
// 	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
//  	char *d1 = strchr(src, '\0');
//  	char *d2 = ft_strchr(src, '\0');
// 	printf("the result is : %s\n", d1);
// 	printf("the result is : %s\n", d2);
// 	return (0);
// }