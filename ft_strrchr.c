/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:32:17 by aelkhali          #+#    #+#             */
/*   Updated: 2022/10/17 09:42:53 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	if (!(char) c)
		return (NULL);
	length = ft_strlen(s) - 1;
	s += length;
	while (length > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		length--;
	}
	return ((char *)s);
}
