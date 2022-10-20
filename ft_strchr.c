/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:25:50 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/20 10:02:54 by aelkhali         ###   ########.fr       */
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
